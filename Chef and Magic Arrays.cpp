#include <bits/stdc++.h>
 
using namespace std;
 
#define Speed ios::sync_with_stdio(false)
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
	Speed;
	TestCases()
	{
		ll n,i,j,x,mn=1000001, mx=0;
		cin>>n;
		ll min[n],max[n];
		for(i=0; i<n; i++)
		{
			mn=1000001; mx=0;
			cin>>x;
			ll a[x];
			for(j=0; j<x; j++)
			{
				cin>>a[j];
				
				if(a[j]>mx)
				mx=a[j];
				
				if(a[j]<mn)
				mn=a[j];
			}
			min[i]=mn;
			max[i]=mx;
		}
		
		ll smin=0, smax=0;
		for(i=0; i<n-1; i++)
		{
			smin+=abs(min[i]-max[i+1])*(i+1);
			smax+=abs(max[i]-min[i+1])*(i+1);
		}
		smin>smax?cout<<smin:cout<<smax;
		cout<<endl;
	}
	return 0;
}	

















