#include<bits/stdc++.h>

using namespace std;


int mod(string s, int n)                
{
    int number = 0;
    for(int i = 0; i < s.length(); i++)
    {
        number=(number*10+(s[i]-'0')); 
        number%=n;
    }
    return number;
}


int main()
{
	string s;
	int n;
	cin>>s>>n;
	int y=mod(s,n);
	cout<<y;
	return 0;
}
