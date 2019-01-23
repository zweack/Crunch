#include <bits/stdc++.h>
using namespace std;
#define fl(i,a,n) for (int i=a;i<n;i++)
#define rfl(i,a,n) for (int i=n-1;i>=a;i--)
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
typedef long long ll;
typedef pair<int,int> PII;
const ll mod=1000000007;
template <typename T> T gcd(T a, T b) { return b != 0 ? gcd(b, a % b) : a; }
/*std::cout << std::fixed;
std::cout << std::setprecision(2);*/
ll input[100000];
ll seg[100000];
ll lazy[100000];
void constructTree(ll low,ll high,ll pos){
    if(low == high){
        seg[pos] = input[low];
        return;
    }
    ll mid = (low+high)/2;
    constructTree(low,mid,2*pos+1);
    constructTree(mid+1,high,2*pos+2);
    seg[pos]=seg[2*pos+1]+seg[2*pos+2];
}
ll query(ll lazy[], ll qlow,ll qhigh,ll low,ll high,ll pos) 
{
        if(low > high) {
            return 0;
        }
        if (lazy[pos] != 0) {
            seg[pos] += lazy[pos];
            if (low != high) {
                lazy[2 * pos + 1] += lazy[pos];
                lazy[2 * pos + 2] += lazy[pos];
            }
            lazy[pos] = 0;
        }
        if(qlow > high || qhigh < low){
            return 0;
        }
        if(qlow <= low && qhigh >= high){
            return seg[pos];
        }
        ll mid = (low+high)/2;
        return query( lazy, qlow, qhigh,
                        low, mid, 2 * pos + 1)+
                query( lazy,  qlow, qhigh,
                        mid + 1, high, 2 * pos + 2);

}
void update(ll lazy[],ll startRange,ll endRange,ll delta,ll low,ll high,ll pos) 
{
        if(low > high) {

            return;
        }
        if (lazy[pos] != 0) {
            seg[pos] += lazy[pos];
            if (low != high) { 
                lazy[2 * pos + 1] += lazy[pos];
                lazy[2 * pos + 2] += lazy[pos];
            }
            lazy[pos] = 0;
        }
        if(startRange > high || endRange < low) {
            return;
        }
        if(startRange <= low && endRange >= high) {
            seg[pos] += delta;
            if(low != high) {
                lazy[2*pos + 1] += delta;
                lazy[2*pos + 2] += delta;
            }
            return;
        }
        int mid = (low + high)/2;
        update(lazy, startRange, endRange,
                delta, low, mid, 2*pos+1);
        update(lazy, startRange, endRange,
                delta, mid+1, high, 2*pos+2);
        seg[pos] =seg[2*pos + 1]+seg[2*pos + 2];
}

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

int n;
cin >> n;
for(int i=0;i<n;i++){
    cin >> input[i];
}
constructTree(0,n-1,0);
cout << query(lazy,3,3,0,n-1,0) << "\n";
update(lazy,1,3,2,0,n-1,0);
cout << query(lazy,0,4,0,n-1,0);
return 0;
}