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

ll LCM(ll a, ll b)
{
	ll l=(a*b)/gcd(a,b);
	return l;
}

ll Mod(string num, ll a)
{
    ll i,res=0;
    for(i=0; i<num.length(); i++) res = (res*10+(ll)num[i]-'0')%a;
    return res;
}

ll nCr[2005][2005];
void FindnCr(ll n, ll k)
{
    ll i, j,mod=1000000007;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= min(i, k); j++)
        {
            if (j == 0 || j == i)
                nCr[i][j] = 1;
            else
                nCr[i][j] = (nCr[i-1][j-1] + nCr[i-1][j])%1000000007;
        }
    }
}

ll RevBinarySearch(ll arr[], ll l, ll r, ll x)
{
  while (l <= r)
  {
    int m = l + (r-l)/2;
    if (arr[m] == x) return m;  
    if (arr[m] < x) r = m - 1;     
    else l = m + 1;
  }
  return -1; 
}

ll binarySearch(ll arr[], ll l, ll r, ll x)
{
  while (l <= r)
  {
    int m = l + (r-l)/2;
    if (arr[m] == x) return m;  
    if (arr[m] < x) l = m + 1;    
    else r = m - 1;
  }
  return -1; 
}

unsigned ll Logn(unsigned ll val, unsigned ll base)
{
   return log(val) / log(base);
}

bool isPrime[1000001];
void sieve(ll n) 
{
    ll i,j;
    for(i = 0; i <= n;++i)  isPrime[i] = true;
    isPrime[0] = false; isPrime[1] = false;
    for(i = 2; i * i <= n; ++i) 
    {
        if(isPrime[i] == true) 
        {       
            for(j = i * i; j <= n ;j += i)
            isPrime[j] = false;
        }
    }
}

ll stringToInteger(string s)
{
    ll h=0;
    stringstream convh(s); convh >> h;
    return h;
}

string IntToString (ll a)
{
    ostringstream temp;
    temp<<a;
    return temp.str();
}


string Slice(string s, ll pos, ll length)
{
    string x = s.substr(pos, length); return x;
}

ll findPositionInString(string s, string sub)
{
    ll pos = s.find(sub);
    if(pos>=s.length()) return -1;
    else return pos;
}

int main()
{
	speed;
	#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
	#endif
    //TestCases(){}
   

	return 0;
}
