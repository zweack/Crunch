// LINK: https://www.codechef.com/AUG17/problems/CHEFMOVR
 
#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long int
 

 
int main()
{
	ll t,i,n,d,j;
	cin>>t;
	for(i=0; i<t; i++)
	{
		cin>>n>>d;
		ll a[n],avg=0,count=0;
		for(j=0; j<n; j++)
		{
			cin>>a[j];
			avg+=a[j];
		}
		if(avg%n!=0)
		{
			count=-1;
		}
		else
		{
			avg/=n;
			for(j=0; j<n-d; j++)
			{
					if(a[j]<avg)
					{
						
						a[j+d]-=(avg-a[j]);
						count+=(avg-a[j]);
						a[j]=avg;
					}
					
					if(a[j]>avg)
					{
						a[j+d]+=(a[j]-avg);
						count+=(a[j]-avg);
						a[j]=avg;
					}
				
			}
		}
		for(j=0; j<n; j++)
		{
			if(a[j]!=avg)
			{
				count=-1;
				break;
			}
		}
		cout<<count<<endl;
	}
} 







