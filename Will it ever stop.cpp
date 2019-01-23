
#include<bits/stdc++.h>

using namespace std;



int main()
{
	unsigned long long n;
	int flag=0,i;
	cin>>n;
	for(i=2; i<=50; i++)
	{
		if(pow(2,i)==n)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	cout<<"TAK";
	else
	cout<<"NIE";
	return 0;
}
