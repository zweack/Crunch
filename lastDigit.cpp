#include<bits/stdc++.h>

using namespace std;

int mod(string b, int a)
{
	if (a==0 && b.length()==1 && b[0]=='0')
        return 1;
 
    if (b.length()==1 && b[0]=='0' )
        return 1;
 
    if (a==0)
        return 0;
	
	int number =0,i;
	for(i=0; i<b.length(); i++)
	{
		number=(number*10+(b[i]-'0'));
		number=number%a;
	}
	return number;
}

int main()
{
	long t,i;
	cin>>t;
	for(i=0; i<t; i++)
	{
		int a,y,z;
		string b;
		cin>>a>>b;
		y=mod(b,4);
		z=pow(a,y);
		
		cout<<z%10<<endl;
	}
	return 0;
}
