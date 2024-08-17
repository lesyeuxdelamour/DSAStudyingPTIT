#include <bits/stdc++.h>
#define _sinusoid_() int main()
#define endl "\n"
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll dp[51] = {};

void sieve()
{
	dp[0] = dp[1] = 1;
	dp[2] = 2;
	for(int i = 3; i <= 50; ++i)
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
}

_sinusoid_()
{
	faster();
	sieve();
	int tc;
	cin >> tc;
	while(tc--)
	{
		int n;
		cin >> n;
		cout << dp[n] << endl;
	}
	return 0;
}