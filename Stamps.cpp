#include<bits/stdc++.h>

using namespace std;



int main()
{
	long long t,j;
	cin>>t;
	for(j=1; j<=t; j++)
	{
		long long n,k,i,s=0,flag=0,count=0;
		cin>>n>>k;
		long long a[k];
		for(i=0; i<k; i++)
		{
			cin>>a[i];
		}
		sort(a,a+k);
		for(i=k-1; i>=0; i--)
		{
			s+=a[i];
			count++;
			if(s>=n)
			{
				flag=1;
				break;
			}
		}
		if(flag)
		cout<<"Scenario #"<<j<<":"<<endl<<count<<endl;
		else
		cout<<"Scenario #"<<j<<":"<<endl<<"impossible"<<endl;
	}
	return 0;
}
