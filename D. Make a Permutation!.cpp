// Link: http://codeforces.com/problemset/problem/864/D

#include<bits/stdc++.h>

using namespace std;

ll main()
{
  long long n,i,k=0;
  cin>>n;
  long long a[n], b[n+1],mark[n+1], count=0;
  for(i=0; i<=n; i++)
  {
  	mark[i]=0;
  	b[i]=0;
  }
  for(i=0; i<n; i++)
  {
  	cin>>a[i];
  	b[a[i]]++;
  }
  
  vector<long long>v;
  for(i=1; i<=n; i++)
  {
  	if(b[i]==0)
  	{
   	v.push_back(i);
  	count++;
    }
  }
  sort(v.begin(), v.end());
  
  for(i=0; i<n; i++)
  {
  	if(b[a[i]]>1)
  	{
  	  if(a[i]>v[k])
	  {
	  	b[a[i]]--;
		a[i]=v[k];
		k++;	
	  }	
	  if(a[i]<v[k])
	  {
	  	if(mark[a[i]]==0)
	  	mark[a[i]]=1;
	  	else
	  	{
	  	a[i]=v[k];
	    b[a[i]]--;
	    k++;	
	  }	
	  }
	}
  }
  cout<<count<<endl;
  for(i=0; i<n; i++)
  cout<<a[i]<<" ";
  return 0;
}







