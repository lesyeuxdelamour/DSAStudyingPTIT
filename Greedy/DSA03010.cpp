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
		int n;
		cin >> n;
		priority_queue<ll, vector<ll>, greater<ll>> pq;
		for(int i = 0; i < n; ++i)
		{
			ll x;
			cin >> x;
			pq.push(x);
		}
		ll ans = 0;
		while(pq.size() > 1)
		{
			ll top1 = pq.top();
			pq.pop();
			ll top2 = pq.top();
			pq.pop();
			ans += top1 + top2;
			pq.push(top1 + top2);
		}
		cout << ans << endl;
	}
	return 0;
}