#include<bits/stdc++.h>

using namespace std;

int main()
{
  long n,i,FC=0,SC=0;
  cin>>n;
  char s[n];
  cin>>s;
  for(i=1; i<n; i++)
  {
	if(s[i]=='S')
	{
		if(s[i-1]=='F')
		FC++;
	}
	if(s[i]=='F')
	{
		if(s[i-1]=='S')
		SC++;
	}
  	
  }
  SC>FC?cout<<"YES":cout<<"NO";
  return 0;
}
