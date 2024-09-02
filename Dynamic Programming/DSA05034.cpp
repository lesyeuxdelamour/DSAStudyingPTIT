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
		int dp[n + 1] = {};
		dp[0] = 1;
		ll cur = dp[0];
		for(int i = 1; i <= n; ++i)
		{
			dp[i] = cur % MOD;
			if(i >= k)
				cur = (cur - dp[i - k] + dp[i] + MOD) % MOD;
			else
				cur = (cur + dp[i]) % MOD;
		}
		cout << dp[n] << endl;
	}
	return 0;
}