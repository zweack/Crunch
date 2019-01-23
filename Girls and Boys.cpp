#include<bits/stdc++.h>

using namespace std;


int main()
{
	while(1)
	{
		long long g,b;
		cin>>g>>b;
		if(g==-1&&b==-1)
		break;
		else if(g==0)
		cout<<b<<endl;
		else if(b==0)
		cout<<g<<endl;
		else if(g==b)
		cout<<"1"<<endl;
		else
		{
			if(g>b)
			cout<<(g/(b+1))+1<<endl;
			if(g<b)
			cout<<(b/(g+1))+1<<endl;
		}
	}
}
