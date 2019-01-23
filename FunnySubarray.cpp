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
  	ll n,i,j,m=0;
  	cin>>n;
  	ll a[n+1],minin[100001]={0},maxin[100001]={0};
  	for(i=1; i<=n; i++)
  	{
  		cin>>a[i];
  		if(minin[a[i]]==0) minin[a[i]]=i;
  		else maxin[a[i]]=i;
  	}
  	for(i=1; i<=n; i++)
  	{
  		if(abs(maxin[i]-minin[i])+1>m) m= abs(maxin[i]-minin[i])+1;
  	}
  	cout<<m;

  
    

	return 0;
}
