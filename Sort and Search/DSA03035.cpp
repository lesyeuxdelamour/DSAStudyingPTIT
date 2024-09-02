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
	int n;
	cin >> n;
	int a[n], dp[n] = {};
	int res = 0;
	for(int i = 0; i < n; ++i)
	{
		cin >> a[i];
		dp[a[i]] = dp[a[i] - 1] + 1;
		res = max(res, dp[a[i]]);
	}
	cout << n - res << endl;
	return 0;
}