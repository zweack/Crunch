// Link: https://www.codechef.com/OCT17/problems/MEX

#include<bits/stdc++.h>

using namespace std;


int main()
{
  long t,i,j,n,k,max,ans,flag;
  cin>>t;
  for(i=0; i<t; i++)
  {
  	cin>>n>>k;
  	max=0; flag=0; ans=0;
  	long a[n];
  	for(j=0; j<n; j++)
  	{
	  cin>>a[j];
	  if(max<a[j])
	  max=a[j];
    }
    long b[max+1];
    for(j=0; j<max+1; j++)
  	{
	  b[j]=-1;
    }
    for(j=0; j<n; j++)
  	{
	  b[a[j]]=a[j];
    }
//     for(j=0; j<max+1; j++)
//  	{
//	  cout<<b[j]<<" ";
//    }
    cout<<endl;
    
    for(j=0; j<max+1; j++)
  	{
	  if(b[j]==-1)
	  {
		if(k==0)
		{
			ans=j;
			flag=1;
			break;
		}
		else
		k--;
	  }
    }
    if(k!=0)
    {
    	ans=max+k+1;
    	flag=1;
	}
	if(flag==0)
	ans=max+1;
	cout<<ans<<endl;
  }
  return 0;
}
