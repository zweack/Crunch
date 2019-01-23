#include <bits/stdc++.h>

#define ll long long int
#define ld long double

using namespace std;
ll seg[100000];
void constructTree(ll input[],ll seg[],ll low,ll high,ll pos);
ll rangeminQuery(ll seg[],ll qlow,ll qhigh,ll low,ll high,ll pos);
void update(ll seg[],ll pos,ll low,ll high,ll idx,ll val);

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

ll n,q,x,l,h,inc; cin>>n>>q;
ll input[n];

for(ll i=0;i<n;i++) cin>>input[i];

constructTree(input,seg,0,n-1,0);

for(ll i =0;i<q;i++)
{
    cin>>x;
       
    if(x==1)
    {
        ll s,inc;
        cin>>s>>inc;
        update(seg,0,0,n-1,s,inc);
    }
    if(x==2)
    {   
        cin>>l>>h;
        cout<<rangeminQuery(seg,l,h,0,n-1,0)<<endl;
            
    }
}
return 0;
}
void constructTree(ll input[],ll seg[],ll low,ll high,ll pos){
    if(low == high){
        seg[pos] = input[low];
        return;
    }
    ll mid = (low+high)/2;
    constructTree(input,seg,low,mid,2*pos+1);
    constructTree(input,seg,mid+1,high,2*pos+2);
    seg[pos]=seg[2*pos+1]+seg[2*pos+2];
}
ll rangeminQuery(ll seg[],ll qlow,ll qhigh,ll low,ll high,ll pos){
    if(qlow<=low&&qhigh>=high)
        return seg[pos];
    if(qlow>high || qhigh<low)
        return 0;
    ll mid = (low+high)/2;
    return rangeminQuery(seg,qlow,qhigh,low,mid,2*pos+1)+rangeminQuery(seg,qlow,qhigh,mid+1,high,2*pos+2);
}
void update(ll seg[],ll pos,ll low,ll high,ll idx,ll val){
    if(low == high)
    {
        // Leaf node
        seg[pos]= val;
    }
    else
    {
        int mid = (low+high) / 2;
        if(low <= idx && idx <= mid)
        {
            // If idx is in the left child, recurse on the left child
            update(seg,2*pos+1,low, mid, idx, val);
        }
        else
        {
            // if idx is in the right child, recurse on the right child
            update(seg,2*pos+2, mid+1, high, idx, val);
        }
        // Internal node will have the sum of both of its children
        seg[pos] = seg[2*pos+1]+seg[2*pos+2];
    }

}
