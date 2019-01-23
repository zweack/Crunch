#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define ld long double
#define speed ios::sync_with_stdio(false)

ll seg[100000];
ll lazy[100000]={};

void constructTree(ll input[],ll seg[],ll low,ll high,ll pos)
{
    if(low == high)
    {
        seg[pos] = input[low];
        return;
    }
    ll mid = (low+high)/2;
    constructTree(input,seg,low,mid,2*pos+1);
    constructTree(input,seg,mid+1,high,2*pos+2);
    seg[pos]=seg[2*pos+1]+seg[2*pos+2];
}
void updateSegmentTreeRangeLazy(ll startRange,ll endRange,ll delta,ll low,ll high,ll pos) 
{
    if(low > high) return;

    //make sure all propagation is done at pos. If not update tree
    //at pos and mark its children for lazy propagation.
    if (lazy[pos] != 0) 
    {
        seg[pos] += lazy[pos];
        if (low != high) 
        { 
            //not a leaf node
            lazy[2 * pos + 1] += lazy[pos];
            lazy[2 * pos + 2] += lazy[pos];
        }
        lazy[pos] = 0;
    }

    //no overlap condition
    if(startRange > high || endRange < low) return;
    

    //total overlap condition
    if(startRange <= low && endRange >= high) 
    {
        seg[pos] += delta;
        if(low != high) 
        {
            lazy[2*pos + 1] += delta;
            lazy[2*pos + 2] += delta;
        }
        return;
    }
    //otherwise partial overlap so look both left and right.
    int mid = (low + high)/2;
    updateSegmentTreeRangeLazy(startRange, endRange, delta, low, mid, 2*pos+1);
    updateSegmentTreeRangeLazy(startRange, endRange, delta, mid+1, high, 2*pos+2);
    seg[pos] =seg[2*pos + 1]+seg[2*pos + 2];
}
ll rangeMinimumQueryLazy(ll qlow,ll qhigh, ll low,ll high,ll pos) 
{

    if(low > high)  return 0;
 
    //make sure all propagation is done at pos. If not update tree
    //at pos and mark its children for lazy propagation.
    if (lazy[pos] != 0) 
    {
        seg[pos] += lazy[pos];
        if (low != high) 
        { 
            //not a leaf node
            lazy[2 * pos + 1] += lazy[pos];
            lazy[2 * pos + 2] += lazy[pos];
        }
        lazy[pos] = 0;
    }

    //no overlap
    if(qlow > high || qhigh < low) return 0;
        
    //total overlap
    if(qlow <= low && qhigh >= high)  return seg[pos];


    //partial overlap
    int mid = (low+high)/2;
    return rangeMinimumQueryLazy(qlow, qhigh, low, mid, 2 * pos + 1)+ rangeMinimumQueryLazy(qlow, qhigh, mid + 1, high, 2 * pos + 2);

}

int main()
{
    speed;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ll n,q; cin>>n>>q;
    ll input[n];

    for(ll i=0;i<n;i++)
    cin>>input[i];
    constructTree(input,seg,0,n-1,0);
    for(ll j =0; j<q; j++)
    {
        ll x;
        cin>>x;
       
        if(x==1)
        {
            ll s,e,inc;
            cin>>s>>e>>inc;
            updateSegmentTreeRangeLazy(s,e,inc,0,n-1,0);
        }
        if(x==2)
        {   
            ll l,h;
            cin>>l>>h;
            cout<<rangeMinimumQueryLazy(l,h,0,n-1,0)<<endl;
            
        }
    }
    return 0;
}
