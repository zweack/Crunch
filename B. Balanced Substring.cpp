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
	ll n,i,count=0; cin>>n;
	
    ll one[n],zero[n]; one[0]=0; zero[0]=0;
    
    string s; cin>>s;
    
    if(s[0]=='0') zero[0]=1;
    else  one[0]=1;
    
    for(i=1; i<n; i++)
    {
    	one[i]=one[i-1]; zero[i]=zero[i-1];
    	
		if(s[i]=='0') zero[i]++;
		else one[i]++;	
		
	}
	for(i=0; i<n; i++)
	cout<<zero[i]<<" ";
	cout<<endl;
	for(i=0; i<n; i++)
	cout<<one[i]<<" ";
	cout<<endl;
	for(i=n-1; i>=0; i++)
	{
		if(one[i]==zero[i])
		{
			count=one[i]*2;
			break;
		}
	}
    cout<<count;
	return 0;
}	






