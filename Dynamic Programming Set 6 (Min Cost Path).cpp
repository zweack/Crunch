#include<bits/stdc++.h>

using namespace std;

long min(long x, long y, long z)
{
	if(x<y)
		return (x<z)?x:z;
	else
		return (y<z)?y:z;
}

long minCost(long a[][3], long m, long n)
{
	if (n < 0 || m < 0)
      return INT_MAX;
	else if(m==0&&n==0)
		return a[m][n];
	else
		return a[m][n]+min(minCost(a,m-1,n-1), minCost(a,m,n-1), minCost(a,m-1,n)); 
}

int main()
{
	long i, j, a[3][3];
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		cin>>a[i][j];
	}
	cout<<minCost(a, 2,2);
	return 0;
}
