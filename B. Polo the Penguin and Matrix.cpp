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
	ll n,m,d,i,k,mod,ans=0,mid=0;
	cin>>n>>m>>d;
	
	k=n*m; ll a[k];
	
	for(i=0;i<k; i++)
	{
		cin>>a[i];
	}
	
	sort(a,a+k);  mod=a[0]%d;
	
	for(i=1; i<k; i++)
	{
		if(a[i]%d!=mod){ ans=-1; break; }
	}
	if(ans==-1) cout<<ans;
	else 
	{
		if(k%2==0) mid=a[k/2];
		else mid= a[(k-1)/2];
		
		for(i=0; i<k; i++)
		ans=ans+abs(a[i]-mid)/d;
		cout<<ans;
	}
	return 0;
}	
























