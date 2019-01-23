#include<bits/stdc++.h>

using namespace std;



int main()
{
	long long t,i;
	cin>>t;
	for(i=0; i<t; i++)
	{
		long long n,j,x=0;
		cin>>n;
		long long a[n],b[n];
		for(j=0; j<n; j++)
		cin>>a[j];
		for(j=0; j<n; j++)
		cin>>b[j];
		sort(a,a+n);
		sort(b,b+n);
		for(j=0; j<n; j++)
		x=x+a[j]*b[j];
		cout<<x<<endl;
	}
	return 0;
}
