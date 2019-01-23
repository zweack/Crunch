#include <bits/stdc++.h>

using namespace std;

#define speed ios::sync_with_stdio(false)
#define ll long long int
#define ld long double
#define gcd(a,b) __gcd(a,b)

#define TestCases() ll t;cin>>t;while(t--)

int main()
{
    speed;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
  
    ll n,m,i,x,y;
    cin>>n>>m;
    ll a[100001]={0}
    for(i=0; i<m; i++)
    {
        cin>>x>>y;
        if(x>y) swap(x,y);
        if(a[x]==0) a[x]=2
    }    

    return 0;
}
