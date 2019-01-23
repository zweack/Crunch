#include <bits/stdc++.h>

using namespace std;

#define speed ios::sync_with_stdio(false)
#define ll long long int
#define ld long double
#define pb push_back
#define in insert
#define mp make_pair
#define gcd(a,b) __gcd(a,b)

#define TestCases() ll t;cin>>t;while(t--)

ld fast_exp(ld a,ll b)
{
	if(a==0)
		return 0;
	if(b==0)
		return 1;
	if(b==1)
		return a;
	if(b%2==0)
	{
		return fast_exp(((a)*(a)),b/2);
	}
	return ((a)*fast_exp(((a)*(a)),(b-1)/2));
}
vector<ll> a[100001];
ll visited[100001]={0};
ll weight[100001]={0};
void dfs(ll x, ll w)
{
  visited[x]=w;
  for(ll i=0; i<a[x].size(); i++)
  {
    dfs(a[x][i],w+weight[a[x][i]-1]);
  }
}
int main()
{
	speed;
	TestCases()
	{
		ll n,i,u,v;
    cin>>n;
    for(i=0; i<n; i++)
    cin>>weight[i];
    for(i=0; i<n; i++)
    {
      cin>>u>>v;
      a[u].push_back(v);
      a[v].push_back(u);
    }
    dfs(1, weight[0]);
    for(i=0; i<n; i++)
    cout<<visited[i]<<" ";
	}
	return 0;
}
