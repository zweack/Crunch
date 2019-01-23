// Link: www.hackerrank.com/contests/university-codesprint-3/challenges/the-snake-vs-the-wind

#include<bits/stdc++.h>

using namespace std;

int main()
{
  long n,i=0,j=0,count=1;
  cin>>n;
  long a[n][n];
  while(j<=n-1)
  {
  	i=0;
	while(i<=n-1)
  	{
  	  a[i][j]=count;
	  count++;
	  i++;	
	}
	j++;
	if(j>n-1)
	break;
	i=n-1;
	while(i>=0)
  	{
  	  a[i][j]=count;
	  count++;
	  i--;	
	}
	j++;
	if(j>n-1)
	break;
  }
  
  for(i=0; i<n; i++)
  {
  	for(j=0; j<n; j++)
  	cout<<a[i][j]<<" ";
  	cout<<endl;
  }
  return 0;
}
