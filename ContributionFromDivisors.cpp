#include <bits/stdc++.h>

using namespace std;

#define speed ios::sync_with_stdio(false)
#define ll long long int
#define ld long double
#define gcd(a,b) __gcd(a,b)

#define TestCases() ll t;cin>>t;while(t--)

ll a[1000001];
ll b[1000001];

void divSum()
{
    ll i,j,result = 0;    
 	for(i=0; i<1000001; i++) b[i]=1;
    for (i=2; i<1000001; i++)
    {
        for(j=i; j<1000001; j+=i)
        {
        	b[j]+=a[i];
        }
    }
}

ll oddSum(ll n)
{
	if (n==1) return 1;
	ll i,x,result=0;
	while(1)
	{
		x=n%10;
		if(x%2!=0) result+=x;
		n/=10;
		if(n==0) break;
	}
	return result;
}
int main()
{
	speed;
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
	#endif
  	
  	ll i,q,n;
  	for(i=1; i<1000001; i++)
  	{
  		a[i]=oddSum(i);
  	}
  	cin>>q;
  	divSum();
  	for(i=0; i<q; i++)
  	{
  		cin>>n;
  		cout<<b[n]<<endl;
  	}
	return 0;
}
