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
		ll a[n], dp[n];
		for(int i = 0; i < n; ++i)
			cin >> a[i];	
		dp[0] = a[0];
		dp[1] = max(a[0], a[1]);
		dp[2] = max(a[0] + a[2], a[1]);
		for(int i = 3; i < n; ++i)
			dp[i] = max(dp[i - 2], dp[i - 3]) + a[i];
		cout << max(dp[n - 1], dp[n - 2]) << endl;
	}
	return 0;
}