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
		int a[n][m], dp[n][m];
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < m; ++j)
				cin >> a[i][j];
		dp[0][0] = a[0][0];
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < m; ++j)
			{
				if(i == 0 && j > 0)
					dp[i][j] = dp[i][j - 1] + a[i][j];
				if(j == 0 && i > 0)
					dp[i][j] = dp[i - 1][j] + a[i][j];
				if(i > 0 && j > 0)
					dp[i][j] = min({dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1]}) + a[i][j];
			}
		cout << dp[n - 1][m - 1] << endl;
	}
	return 0;
}