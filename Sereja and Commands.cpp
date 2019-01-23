// LINK: https://www.codechef.com/SEPT17/problems/SEACO
 
#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long int
 

void typeOne(ll a[], ll b[][4], ll l, ll r, ll j)
{
	ll i;
	for(i=l; i<=r; i++)
	a[i-1]+=b[j][3];
}

void typeTwo(ll a[], ll b[][4],ll l, ll r)
{
	for(ll i=l; i<=r; i++)
	{
	
		if(b[i-1][0]==2)
		typeTwo(a, b, b[i-1][1], b[i-1][2]);
		else
		b[i-1][3]++;	
	}	
}

int main()
{
	ll t,i;
	cin>>t;
	for(i=0; i<t; i++)
	{
		ll m,n,j,q,l,r;
		cin>>n>>m;
		ll b[m][4];
        ll a[100001]={0};
		for(j=0; j<m; j++)
		{
			cin>>q>>l>>r;
			b[j][0]=q;
			b[j][1]=l;
			b[j][2]=r;
			b[j][3]=0;
			if(q==1)
			b[j][3]++;
			if(q==2)
			typeTwo(a,b,l,r);
		}
		for(j=0; j<m; j++)
		{
			if(b[j][0]==1)
			{
				typeOne(a,b,l,r,j);
			}
		}
		for(j=0; j<n; j++)
		cout<<a[j]<<" ";
		cout<<endl;
	}
	return 0;
} 
