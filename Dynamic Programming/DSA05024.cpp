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
		int a[n], dp[k + 1] = {};
		dp[0] = 1;
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		for(int i = 1; i <= k; ++i)
			for(int j = 0; j < n; ++j)
				if(i >= a[j])
					dp[i] = (dp[i] + dp[i - a[j]]) % MOD;
		cout << dp[k] << endl;
	}
	return 0;
}