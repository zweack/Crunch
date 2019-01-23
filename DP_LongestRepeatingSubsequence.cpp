#include <bits/stdc++.h>

using namespace std;

#define speed ios::sync_with_stdio(false)
#define ll long long int
#define ld long double
#define ff first 
#define ss second
#define gcd(a,b) __gcd(a,b)
#define TestCases() ll t;cin>>t;while(t--)

ll LRSDP(string x)
{
	ll n = x.length(); ll i,j,dp[n+1][n+1];
	for(i=0; i<=n; i++) dp[i][0]=0;
	for(j=0; j<=n; j++) dp[0][j]=0;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			if(x[i-1]==x[j-1]&&i!=j) dp[i][j]=1+dp[i-1][j-1];
			else dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
		}
	}
	return(dp[n][n]);
}

int main()
{
    speed; cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    ll n; string x; cin>>x; n=x.length(); 
    cout<<LRSDP(x);

    return 0;
}