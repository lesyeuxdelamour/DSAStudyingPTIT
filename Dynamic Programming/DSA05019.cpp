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
		int n, m;
		cin >> n >> m;
		int a[n + 1][m + 1] = {}, dp[n + 1][m + 1] = {};
		for(int i = 1; i <= n; ++i)
			for(int j = 1; j <= m; ++j)
			{
				cin >> a[i][j];
				dp[i][j] = a[i][j];
			}
		int ans = 0;
		for(int i = 1; i <= n; ++i)
			for(int j = 1; j <= m; ++j)
				if(a[i][j])
				{
					dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + 1;
					ans = max(ans, dp[i][j]);
				}
		cout << ans << endl;
	}
	return 0;
}