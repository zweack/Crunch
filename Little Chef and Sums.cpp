// LINK: https://www.codechef.com/SEPT17/problems/CHEFSUM

#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
	ll t,i;
	cin>>t;
	for(i=0; i<t; i++)
	{
		ll n,j,min=100001, index;
		cin>>n;
		ll a[n];
		for(j=0; j<n; j++)
		{
			cin>>a[j];
			if(a[j]<min)
			{
				min=a[j];
				index=j;
			}
		}
		cout<<index+1<<endl;
	}
	return 0;
}
