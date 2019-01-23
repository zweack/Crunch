// LINK: https://www.codechef.com/AUG17/problems/HILLJUMP
 
#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long int
 

 
int main()
{
	ll n,q,i,j,k,l,r,x,y,p,d;
	cin>>n>>q;
	ll a[n];
	for(i=0; i<n; i++)
	cin>>a[i];
	for(i=0; i<q; i++)
	{
		cin>>y;
		if(y==1)
		{
			cin>>j>>k;
			p=j-1;
			d=0;
			while(k>0)
			{
				if(a[j]>a[j-1])
				{
					j++;
					k--;
					d=0;
				}
				else
				{
					j++;
					d++;
				}
				if(d>100)
				break;
			}
			cout<<j<<endl;
		}
		if(y==2)
		{
			cin>>l>>r>>x;
			for(j=l-1; j<r; j++)
			a[j]+=x;
		}
	}
	return 0;
} 







