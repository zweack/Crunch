// Link: http://codeforces.com/problemset/problem/868/B

#include<bits/stdc++.h>

using namespace std;

int main()
{
  long i,h,m,s,t1,t2,flag=0;
 
  cin>>h>>m>>s>>t1>>t2;
  h=(h*6)%60;
  t1=(t1*6)%60;
  t2=(t2*6)%60;
  long a[60]={0};
  
  for(i=0; i<60; i++)
  {
  	if(i==h||i==m||i==s)
  	a[i]=-1;
  }
  i=(t1+1)%60;
  while(i!=t2)
  {
  	if(a[i]==-1)
  	{
  		flag++;
		break;	
	}
	i=(i+1)%60;
  }
  i=(t2+1)%60;
  while(i!=t1)
  {
  	if(a[i]==-1)
  	{
  		flag++;
		break;	
	}
	i=(i+1)%60;
  }
  if(flag==0||flag==1)
  cout<<"YES";
  if(flag==2)
  cout<<"N0";
  return 0;
}
