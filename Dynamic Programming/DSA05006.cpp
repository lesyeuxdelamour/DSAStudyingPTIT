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
		int a[n], dp[n];
		int ans = -1;
		for(int i = 0; i < n; ++i)
		{
			cin >> a[i];
			dp[i] = a[i];
			for(int j = 0; j < i; ++j)
				if(a[i] > a[j])
					dp[i] = max(dp[i], dp[j] + a[i]);
			ans = max(ans, dp[i]);
		}
		cout << ans << endl;
	}
	return 0;
}