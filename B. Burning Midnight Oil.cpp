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
	ll n,k,x,i,ans=0,j,flag,sum;
	cin>>n>>k;
	x=n*(k-1)/k;
	for(i=x; i<n; i++)
	{
	 	sum=0; flag=0;
		 for(j=0; sum<=n&&i/(pow(k,j))>0; j++)
		{
			sum+=i/(pow(k,j));
			if(sum>=n)
			flag=1;
		}
		if(flag==1)
		{
			ans=i;
			break;
		}
	}
	cout<<ans;
	return 0;
}
