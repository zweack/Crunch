#include<bits/stdc++.h>

using namespace std;



int main()
{
	long n;

	while(1)
	{
		cin>>n;
		if(n==0)
		break;
		else
		{
			double m=(double)n;
			cout<<fixed<<setprecision(2)<<(m*m)/(2*3.14159)<<endl;
		}
	}
	return 0;
}
