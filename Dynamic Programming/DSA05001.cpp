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
		string a, b;
		cin >> a >> b;
		int dp[a.size() + 1][b.size() + 1] = {};
		for(int i = 0; i < a.size(); ++i)
			for(int j = 0; j < b.size(); ++j)
				if(a[i] == b[j])
					dp[i + 1][j + 1] = dp[i][j] + 1;
				else
					dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1]);
		cout << dp[a.size()][b.size()] << endl;
	}
	return 0;
}