// Link: https://www.codechef.com/OCT17/problems/PERFCONT

#include<bits/stdc++.h>

using namespace std;


int main()
{
  long t,i;
  cin>>t;
  for(i=0; i<t; i++)
  {
  	long n,p,j,h=0,c=0;
  	cin>>n>>p;
  	
  	long a[n];
  	for(j=0; j<n; j++)
  	{
  		cin>>a[j];
		if(a[j]>=p/2)
		c++;
		if(a[j]<=p/10)
		h++	;
	}
	if(h==2&&c==1)
	cout<<"yes"<<endl;
	else
	cout<<"no"<<endl;
  }
  return 0;
}
