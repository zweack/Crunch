// LINK: https://www.codechef.com/SEPT17/problems/MINPERM
 
#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long int
 
int main()
{
	ll t,i;
	cin>>t;
	for(i=0; i<t; i++)
	{
		ll n,j,k=1,l=2;
		cin>>n;
		if(n%2==0)
		{
			for(j=1; j<=n; j++)
			{
				if(j%2==0)
				{
					cout<<k<<" ";
					k+=2;
				}
				else
				{
					cout<<l<<" ";
					l+=2;
				}
			}
		}
		else
		{
			
			for(j=1; j<=n-2; j++)
			{
				if(j%2==0)
				{
					cout<<k<<" ";
					k+=2;
				}
				else
				{
					cout<<l<<" ";
					l+=2;
				}
			}
			cout<<n<<" "<<n-2;
		}
		cout<<endl;
	}
	return 0;
} 
