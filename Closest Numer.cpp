// CLOSEST NUMBER-HACKERRANK
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void Sort(int a[],int n)
 {
 int i,j,swap;
 for(i=0; i<(n-1); i++)
  {
    for (j=0; j<n-i-1; j++)
    {
      if (a[j] > a[j+1])
      {
        swap=a[j];
        a[j]   = a[j+1];
        a[j+1] = swap;
      }
    }
  }
}
int main()
{
	int n, a[200001],i,b[200002],s=0;
	cin>>n;
	for(i=0; i<n;i++)
	{
		cin>>a[i];
	}
	Sort(a,n);
	
	for (i=0;i<n-1; i++)
	{
		b[i]=abs(a[i]-a[i+1]);
		
	}
	s=b[0];
	for (i=0;i<n-1; i++)
	{
		if(b[i]<s)
		s=b[i];
	}

	for (i=0;i<n-1; i++)
	{
		if(s==b[i])
		{
			if(i==0)
			cout<<a[0]<<" "<<a[1];
			else
			cout<<a[i]<<" "<<a[i+1];
		}
	}
	
	
return 0;
}
