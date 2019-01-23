#include <bits/stdc++.h>

using namespace std;

#define speed ios::sync_with_stdio(false)
#define ll long long int
#define ld long double
#define ff first 
#define ss second
#define gcd(a,b) __gcd(a,b)
#define TestCases() ll t;cin>>t;while(t--)

ll LCSRec(string x, string y, ll m, ll n)
{
	if(m==0||n==0) return 0;
	else if(x[m-1]==y[n-1]) return 1 + LCSRec(x,y,m-1,n-1);
	else return max(LCSRec(x,y,m,n-1), LCSRec(x,y,m-1,n));
}

ll LCSDP(string x, string y)
{
	ll m = x.length(), n=y.length(); ll i,j,c[m+1][n+1];
	for(i=0; i<=m; i++) c[i][0]=0;
	for(j=0; j<=n; j++) c[0][j]=0;
	for(i=1; i<=m; i++)
	{
		for(j=1; j<=n; j++)
		{
			if(x[i-1]==y[j-1]) c[i][j]=1+c[i-1][j-1];
			else c[i][j]=max(c[i-1][j], c[i][j-1]);
		}
	}
	return(c[m][n]);
}

int main()
{
    speed; cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    ll m,n; string x,y; cin>>x>>y; m=x.length(); n=y.length(); 
    //cout<<LCSRec(x,y,m,n);
    cout<<LCSDP(x,y);

    return 0;
}