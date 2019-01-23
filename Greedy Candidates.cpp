// LINK: https://www.codechef.com/AUG17/problems/GCAC
 
#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long int
 

 
int main()
{
	ll t,i,n,m;
	cin>>t;
	for(i=0; i<t; i++)
	{
		cin>>n>>m;
		ll j,k,minSalary[n], salOff[m],slot[m];
		
		for(j=0; j<n; j++)
		cin>>minSalary[j];
				
		for(j=0; j<m; j++)
		cin>>salOff[j]>>slot[j];
		
		string s[n],x;

		for(j=0; j<n; j++)
		cin>>s[j];

		ll candidate=0,totalSalary=0,count=0;
		ll comp[m];
		for(j=0; j<m; j++)
		comp[j]=0;
		
		for(j=0; j<n; j++)
		{
			ll maxSal=0,index=-1;
			for(k=0; k<m; k++)
			{
                if(salOff[k]>=minSalary[j])
                {
                	x=s[j];
                	if(x[k]=='1'&&slot[k]>0)
                	{
                		if(salOff[k]>maxSal)
                		{
                			maxSal=salOff[k];
                			index=k;
                		}
                	}
                }
			}
			if(index!=-1)
			{
				slot[index]--;
				candidate++;
				totalSalary+=salOff[index];
				comp[index]++;
			}
		}
		for(j=0; j<m; j++)
		if(comp[j]==0)
		count++;

		cout<<candidate<<" "<<totalSalary<<" "<<count<<endl;
	}
	return 0;
} 







