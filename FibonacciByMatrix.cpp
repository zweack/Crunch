#include <bits/stdc++.h>

using namespace std;

#define ll long long int

ll fib(ll n)
{
  if(n<=1)
  return n;
  ll a[2][2]={{1,1},{1,0}};
  ll f[2][2]={{1,1},{1,0}};
  ll w,x,y,z,i;
  for(i=0; i<n-1; i++)
  {
    w=a[0][0]*f[0][0]+a[0][1]*f[1][0];
    x=a[0][0]*f[0][1]+a[0][1]*f[1][1];
    y=a[1][0]*f[0][0]+a[1][1]*f[1][0];
    z=a[1][0]*f[0][1]+a[1][1]*f[1][1];
    a[0][0]=w;
    a[0][1]=x;
    a[1][0]=y;
    a[1][1]=z;
  }
  return a[0][0];
}

int main()
{
	ll n;
  cin>>n;
  cout << fib(n) << '\n';
	return 0;
}
