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
	ld a,b,c,d,x,y,ans=0;
	cin>>a>>b>>c>>d;
	x=1-(a/b);
	y=1-(c/d);
	ans=(a/b)*(1/(1-(x*y)));
	cout<<fixed<<setprecision(12)<<ans;
	return 0;
}	
