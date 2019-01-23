// Link: www.hackerrank.com/contests/university-codesprint-3/challenges/the-snake-vs-the-wind

#include<bits/stdc++.h>

using namespace std;


int main()
{
  long n,i=0,j=0,x,y,count=1;
  cin>>n;
  long pat2[n][n];
  
  while(j<=n-1)
  {
  	i=0;
	while(i<=n-1)
  	{
  	  pat2[i][j]=count;
	  count++;
	  i++;	
	}
	j++;
	if(j>n-1)
	break;
	i=n-1;
	while(i>=0)
  	{
  	  pat2[i][j]=count;
	  count++;
	  i--;	
	}
	j++;
	if(j>n-1)
	break;
  }
  
  
  
  
  
  char m;
  cin>>m;
  
  cin>>x>>y;
  
  if(x==0&&y==0)
  {
  	if(m=='n')
	{
		
	}	
  }
  return 0;
}
