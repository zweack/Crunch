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
	ll n,i,j,sum=0,count=0;
	cin>>n;
	ll a[n],pref[n],dead[n];
	
	for(i=0; i<n; i++)
	cin>>a[i];
	
	pref[0]=a[0];
	ll ct=0;
	for(i=1; i<n; i++)
	pref[i]=pref[i-1]+a[i];
	for(i=n-1; i>=0; i--)
	{
		if(pref[i]==2*pref[n-1]/3)
		{
			ct++;
		}
		dead[i]=ct;
	}
	if(pref[n-1]%3!=0)
	count=0;
	else
	{
		sum=pref[n-1]/3;
		for(i=0; i<n; i++)
		{
			if(pref[i]==sum)
			count+=dead[i+1];
		}
	}
	cout<<count;
	return 0;
}	









