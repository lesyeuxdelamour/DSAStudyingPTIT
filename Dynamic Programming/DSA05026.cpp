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
	int k, n;
	cin >> k >> n;
	int a[n];
	for(int i = 0; i < n; ++i)
		cin >> a[i];
	int dp[k + 1] = {};
	for(int i = 0; i < n; ++i)
		for(int j = k; j >= a[i]; --j)
			dp[j] = max(dp[j], dp[j - a[i]] + a[i]);
	cout << dp[k];
	return 0;
}