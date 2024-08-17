#include <bits/stdc++.h>
#define _sinusoid_() int main()
#define endl "\n"
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

_sinusoid_()
{
	faster();
	int tc;
	cin >> tc;
	while(tc--)
	{
		int k;
		string s;
		cin >> k >> s;
		unordered_map<char, int> mp;
		for(auto x : s)
			mp[x]++;
		priority_queue<int, vector<int>, less<int>> pq;
		for(auto x : mp)
			pq.push(x.second);
		while(k--)
		{
			ll tmp = pq.top();
			pq.pop();
			pq.push(tmp - 1);
		}
		ll ans = 0;
		while(!pq.empty())
		{
			ans += pq.top() * pq.top();
			pq.pop();
		}
		cout << ans << endl;
	}
	return 0;
}