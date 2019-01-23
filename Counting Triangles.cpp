#include<bits/stdc++.h>

using namespace std;


int main()
{
	unsigned long long t;
	cin>>t; 
	while(t--)
	{
		unsigned long long n,r;
		cin>>n;
		r=(n*(n+2)*(2*n+1))/8 ;
		cout<<r<<endl;
		
	}
	return 0;
}
