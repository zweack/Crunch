#include <bits/stdc++.h>
using namespace std;
 
#define speed ios::sync_with_stdio(false)
#define ll long long int
#define ld long double
#define ff first 
#define ss second
#define MAX 1000000000
#define gcd(a,b) __gcd(a,b)

ll n,q,r,i,j,k,x,ans[100001],b[100001],MIN=1,flag,t1;
string s[100001],p,w; vector<pair<string,ll>> vec[100001]; map<string,ll>mp;

int main()
{
    speed; cin.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    cin>>n;
    for(i=0; i<n; i++){ cin>>s[i]; if(s[i]<=s[MIN-1]) MIN=i+1; b[i]=MIN; }

    cin>>q;
    for(i=0; i<q; i++){ cin>>r>>p; vec[r-1].push_back(make_pair(p,i)); }
    
    for(i=0; i<n; i++) 
    {
        w="";
        for(j=0; j<s[i].length(); j++) 
        {
            w += s[i][j]; x = mp[w];

            if(x){ if (s[x-1] > s[i]) mp[w] = i+1; } 
            else mp[w]=i+1; 
        }

        for(j=0; j<vec[i].size(); j++) 
        {
            w = "";
            for(k=0; k<vec[i][j].first.length(); k++) 
            {
                w+=vec[i][j].first[k]; x=mp[w];      
                if(x>0) ans[vec[i][j].second]=x;
            }
            if (!ans[vec[i][j].second]) ans[vec[i][j].second] = b[i];
        }
    }
 
    for(i=0; i<q; i++) cout<<s[ans[i]-1]<<endl;

    return 0;
}