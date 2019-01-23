#include <bits/stdc++.h>
 
using namespace std;
 
#define speed ios::sync_with_stdio(false)
#define ll long long int
#define ld long double
#define pb push_back
#define in insert
#define mp make_pair
#define gcd(a,b) __gcd(a,b)

#define TestCases() ll t;cin>>t;while(t--)
 
ld fast_exp(ld a,ll b)
{
	if(a==0)
		return 0;
	if(b==0)
		return 1;
	if(b==1)
		return a;
	if(b%2==0)
	{
		return fast_exp(((a)*(a)),b/2);
	}
	return ((a)*fast_exp(((a)*(a)),(b-1)/2));
}
 
int main()
{
	speed;
	ll n,i;
	ld x,y,min=10000001,max=0,dist=0,ans;
	cin>>n>>x>>y;
	ld X[n], Y[n];
	for(i=0; i<n; i++)
	{
		cin>>X[i]>>Y[i];
		dist=sqrt(pow(X[i]-x,2)+pow(Y[i]-y,2));
		if(Y[i]<min) min=Y[i];
		if(dist>max) max=dist;
	}
	ans=3.14159265*(max*max-min*min);
	cout<<fixed<<setprecision(8)<<ans;
	return 0;
}	
