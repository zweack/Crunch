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
	ll n,m,i,x,y,count=0,min=1000001;
	cin>>n>>m;
	vector<ll>a[100001];
	for(i=0; i<m; i++)
	{
		cin>>x>>y;
		if(x<min) min=x;
		if(y<min) min=y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	for(i=1; i<=n; i++)
	{
		if(a[i].size()>a[min].size())
		count++;
	}
	return 0;
}
