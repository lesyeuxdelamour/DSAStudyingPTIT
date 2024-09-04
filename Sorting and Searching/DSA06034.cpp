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
		int n, k;
		cin >> n >> k;
		unordered_map<ll, ll> mp;
		vector<ll> v(n);
		for(int i = 0; i < n; ++i)
		{
			cin >> v[i];
			mp[v[i]]++;	
		}
		ll ans = 0;
		if(!(k & 1))
		{
			ans += mp[k / 2] * (mp[k / 2] - 1) / 2;
			mp[k / 2] = 0;
		}
		for(int i = 0; i < n; ++i)
		{
			ans += mp[v[i]] * mp[k - v[i]];
			mp[v[i]] = mp[k - v[i]] = 0;
  		}
  		cout << ans << endl;
	}
	return 0;
}