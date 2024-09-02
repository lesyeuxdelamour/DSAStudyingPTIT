#include <bits/stdc++.h>
#define _sinusoid_() int main()
#define endl "\n"
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

vector<ll> sieve()
{
	vector<ll> v;
	priority_queue<ll, vector<ll>, greater<ll>> pq;
	unordered_map<ll, bool> mp;
	pq.push(1);
	mp[1] = 1;
	while(v.size() < 1e4)
	{
		ll tmp = pq.top();
		pq.pop();
		v.push_back(tmp);
		if(!mp[tmp * 2])
		{
			pq.push(tmp * 2);
			mp[tmp * 2] = 1;
		}
		if(!mp[tmp * 3])
		{
			pq.push(tmp * 3);
			mp[tmp * 3] = 1;
		}
		if(!mp[tmp * 5])
		{
			pq.push(tmp * 5);
			mp[tmp * 5] = 1;
		}
	}
	return v;
}

_sinusoid_()
{
	faster();
	vector<ll> ugly = sieve();
	int tc;
	cin >> tc;
	while(tc--)
	{
		int n;
		cin >> n;
		cout << ugly[n - 1] << endl;
	}
	return 0;
}