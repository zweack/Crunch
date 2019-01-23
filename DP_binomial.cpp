#include <bits/stdc++.h>

using namespace std;

#define speed ios::sync_with_stdio(false)
#define ll long long int
#define ld long double
#define ff first 
#define ss second
#define gcd(a,b) __gcd(a,b)
#define TestCases() ll t;cin>>t;while(t--)

ll binomialRec(ll n, ll r)
{
	if(r==0||r==n) return 1;
	else return (binomialRec(n-1,r-1)+binomialRec(n-1,r));
}

ll binomialDP(ll n, ll r)
{
	ll i,j,a[n+1][r+1];
	for(i=0; i<=n; i++)
	{
		for(j=0; j<=min(i,r); j++)
		{
			if(j==0||j==i) a[i][j]=1; else a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	return a[n][r];
}

int main()
{
    speed; cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
   // ll n,r; cin>>n>>r; cout<<binomialRec(n,r);
    ll n,r; cin>>n>>r; cout<<binomialDP(n,r);
    return 0;
}