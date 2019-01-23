#include <bits/stdc++.h>

using namespace std;

#define speed ios::sync_with_stdio(false)
#define ll long long int
#define ld long double
#define ff first 
#define ss second
#define gcd(a,b) __gcd(a,b)
#define TestCases() ll t;cin>>t;while(t--)
int toNum(char s){ return (int)(s-'0'); }

void showQueue(priority_queue<ll> q)
{
	while(!q.empty()) cout<<q.top()<<" ",q.pop(); cout<<endl;
}

void showQueue(priority_queue<ll, vector<ll>, greater<ll>> q)
{
	while(!q.empty()) cout<<q.top()<<" ",q.pop(); cout<<endl;
}

int main()
{
	speed; cin.tie(NULL);
	#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
	#endif

 	priority_queue<ll> q;
 	q.push(12);
 	showQueue(q);
 	q.push(32); showQueue(q);
 	q.push(1); showQueue(q);
 	q.push(18); showQueue(q);
 	q.push(99); showQueue(q);
 	q.push(2); showQueue(q);
 	cout<<q.size()<<endl;

 	priority_queue<ll, vector<ll>, greater<ll>> pq;
 	pq.push(12); showQueue(pq);
 	pq.push(32); showQueue(pq);
 	pq.push(1); showQueue(pq);
 	pq.push(18); showQueue(pq);
 	pq.push(99); showQueue(pq);
 	pq.push(2); showQueue(pq);
 	cout<<pq.size();


	return 0;
}
 