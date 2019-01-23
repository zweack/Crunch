#include <bits/stdc++.h>

using namespace std;

#define speed ios::sync_with_stdio(false)
#define ll long long int
#define ld long double
#define ff first 
#define ss second
#define MAX 1000000000
#define gcd(a,b) __gcd(a,b)
#define TestCases() ll t;cin>>t;while(t--)

ll takeArr(ll a[], ll n){ for(int o=0; o<n; o++) cin>>a[o]; }
ll initArr(ll a[], ll n,ll val){ for(int o=0; o<n; o++) a[o]=val; }

ll findOne(ll a[], ll n, ll m)
{
    ll wL=0,wR=0,zCount=0,wBest=0;

    while(wR<n)
    {
        if(zCount<=m){ if(a[wR]==0) zCount++; wR++; }
        if(zCount>m){ if(a[wL]==0) zCount--; wL++; }
        if(wR-wL>wBest){ wBest=wR-wL; }
    }
    return wBest;
}

int main()
{
    speed; cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ll n,m; cin>>n>>m; ll a[n]; takeArr(a,n);

    cout<<findOne(a,n,m);



    return 0;  
}