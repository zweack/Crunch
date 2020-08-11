#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mp make_pair
#define pb push_back
#define pii pair <int, int>
#define vi vector<int>

#define FOR(i, a, b) for (int i=a; i<b; i++)
#define FORd(i, a, b) for (int i=a-1; i>=b; i--)
#define F0Rd(i, a) for (int i=a-1; i>=0; i--)
#define F0R(i, a) for (int i=0; i<a; i++)
 
#define f first
#define s second
#define be begin
#define e end
#define lb lower_bound
#define ub upper_bound
#define sz size
 
const int MOD = 1000000007;
long double PI = 4*atan(1);
/*std::cout << std::fixed;
std::cout << std::setprecision(2);*/

ll t,n,k,f[1001],st[1001][1001],dp[1001],frq[101];

void calc() {
	FOR(i,1,n+1) {
		FOR(j,1,101) frq[j] = 0;
		frq[f[i]]++;
		st[i][i] = 0;
		FOR(j,i+1,n+1) {
			st[i][j] = st[i][j-1];
			if (frq[f[j]] == 1) {
				st[i][j] += 2;
			}
			if (frq[f[j]] > 1) {
				st[i][j]++;
			}
			frq[f[j]]++;
		}
	}
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> t;
    while (t--) {
    	cin >> n >> k;
    	FOR(i,1,n+1) cin >> f[i];
    	FOR(i,1,n+1) FOR(j,1,n+1) st[i][j] = 0;
    	calc();
    	FOR(i,1,n+1) dp[i] = MOD;
    	FOR(i,1,n+1) {
    		F0Rd(j,i) {
    			dp[i] = min(dp[i],dp[j]+st[j+1][i]+k);
    		}
    	}
    	cout << dp[n] << "\n";
    }
    return 0;
} 