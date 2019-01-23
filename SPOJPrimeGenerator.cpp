#include<bits/stdc++.h>

using namespace std;



int main()
{
	long long t,i,n;
	cin>>t;
	for(i=0; i<t; i++)
	{
		cin>>n;
		long x=0,j=1,y=0;
		while(1)
		{
			x=n/pow(5,j);
			if(x==0)
			break;
			y=y+x;
			j++;
		}
		cout<<y<<endl;
	}
}
