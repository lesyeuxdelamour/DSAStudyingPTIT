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
		int n, x, y, z;
		cin >> n >> x >> y >> z;
		int dp[n + 1] = {};
		dp[1] = x;
		for(int i = 2; i <= n; ++i)
		{
			if(!(i & 1))
				dp[i] = min(dp[i - 1] + x, dp[i / 2] + z);
			else
				dp[i] = min(dp[i - 1] + x, dp[(i + 1) / 2] + z + y);
		}
		cout << dp[n] << endl;
	}
	return 0;
}