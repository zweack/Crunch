#include <bits/stdc++.h>

using namespace std;

#define speed ios::sync_with_stdio(false)
#define ll long long int
#define ld long double
#define ff first 
#define ss second
#define gcd(a,b) __gcd(a,b)

#define TestCases() ll t;cin>>t;while(t--)

int main()
{
	speed;
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
	#endif
  
 	ll n,m,i,flag=0,mod=0,maxx=0; cin>>n>>m;
 	ll a[n]; map<ll,ll> mp; vector<ll> v;

 	for(i=0; i<n; i++){ cin>>a[i]; mp[a[i]%m]++; }
    for(auto j : mp) maxx = max(maxx, j.ss);

    sort(a,a+n);

    for(i=0; i<n; i++)
    {
    	if(flag==0&&mp[a[i]%m]==maxx) { v.push_back(a[i]); mod=a[i]%m; }
    	else if(flag==1&&a[i]%m==mod){ flag=1; v.push_back(a[i]); }
    }

    sort(v.begin(),v.end()); cout<<v.size();
    for(i=0; i<v.size(); i++) cout<<v[i]<<" ";
	return 0;
}
