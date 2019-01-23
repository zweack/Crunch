#include<bits/stdc++.h>

using namespace std;

int main()
{
  long long n,i,q,k,j,x,y;
  long long count[100001]={0};
  cin>>n;
  long long a[n];
  for(i=0; i<n; i++)
  {
    cin>>a[i];
    y=sqrt(a[i]);
    for(j=1; j<=y; j++)
    {
    	if(a[i]%j==0)
    	count[j]++;
    	
    	if(a[i]!=j*j)
    	count[a[i]/j]++;
	}
  }
  cin>>q;
  for(i=0; i<q; i++)
  {
  	cin>>x;
	cout<<count[x]<<endl;
  }
  return 0;
}
