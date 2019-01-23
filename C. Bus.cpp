// Link: http://codeforces.com/problemset/problem/864/C

#include<bits/stdc++.h>

using namespace std;

int main()
{
  long a,b,f,k,i,full,count=0;
  cin>>a>>b>>f>>k;
  full=b;
  if(b<f||b<(a-f))
  count=-1;
  else
  {
  for(i=0; i<k; i++)
  {
  	
	  if(i%2==0)
  	{
  		if(b<f)
  	{
  		count=-1;
  		break;
	  }
  	 if(i==k-1)
	 {
	 	if(b<a)
		count++;	
	 } 
	 else if(b>=(2*a-f))
	  {
		b=b-a;  	
	  }	
	  else
	  {
	  	b=full;
	  	b=b-(a-f);
	  	count++;
	  }
	  
	}
	 if(i%2==1)
	 {
	 	if(b<a-f)
  	{
  		count=-1;
  		break;o
	  }
		 if(i==k-1)
	 	{
	 		if(b<a)
			count++;	
	 	} 
		else if(b>=a+f)
	 	{
	 		b=b-a;
		}
		else
		{
			b=full;
			b=b-f;
			count++;
		}
	 }
  }
 }
  cout<<count;
  return 0;
}
