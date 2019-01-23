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
	ll a,b,c,i,n,count=0;  cin>>n>>a>>b>>c;
	
	char k='A';
	for(i=0; i<n-1; i++)
	{
		if(k=='A')
		{
			if(a<b) { count+=a; k='B';	}
			else { count+=b; k='C';	}
		}
		else if(k=='B')
		{
			if(a<c) { count+=a; k='A';	}
			else { count+=c; k='C';	}
		}
		else if(k=='C')
		{
			if(b<c) { count+=b; k='A';	}
			else { count+=c; k='B';	}
		}
	}
	cout<<count;
	return 0;
}	















