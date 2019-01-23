#include<iostream>
#include<stdio.h>

using namespace std;
long long coins(long long n)
{
    if(n>0&&n<12)
    return n;
    else if(n>(n/2+n/3+n/4))
    {
        return coins(n/2)+coins(n/3)+coins(n/4);
    }
}
int main()
{
    long long n;
    while(cin>>n)
	{
    	cout<<coins(n)<<endl;
    }
	return 0;
}
