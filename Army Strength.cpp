#include<bits/stdc++.h>

using namespace std;


int main()
{
	long t;
	cin>>t;
	while(t--)
	{
		getchar();
		long m,n,i,a1=0,b1=0;
		cin>>m>>n;
		long a[m],b[n];
		for(i=0; i<m; i++)
		{
			cin>>a[i];
			if(a[i]>a1)
			a1=a[i];
		}
		for(i=0; i<n; i++)
		{
			cin>>b[i];
			if(b[i]>b1)
			b1=b[i];
		}
		if(a1>=b1)
		cout<<"Godzilla"<<endl;
		if(a1<b1)
		cout<<"MechaGodzilla"<<endl;
	}
	return 0;
}
