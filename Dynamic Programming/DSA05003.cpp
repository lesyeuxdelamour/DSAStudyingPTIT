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
		int n, m, p;
		string a, b, c;
		cin >> n >> m >> p >> a >> b >> c;
		int dp[n + 1][m + 1][p + 1] = {};
		for(int i = 1; i <= n; ++i)
			for(int j = 1; j <= m; ++j)
				for(int k = 1; k <= p; ++k)
					if(a[i - 1] == b[j - 1] && b[j - 1] == c[k - 1])
						dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
					else
						dp[i][j][k] = max({dp[i - 1][j][k], dp[i][j - 1][k], dp[i][j][k - 1]});
		cout << dp[n][m][p] << endl;
	}
	return 0;
}