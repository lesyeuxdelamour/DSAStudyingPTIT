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
		int n, v;
		cin >> n >> v;
		int a[n], c[n];
		for(int i = 0; i < n; ++i)
			cin >> a[i];	
		for(int i = 0; i < n; ++i)
			cin >> c[i];
		int dp[v + 1] = {};
		for(int i = 0; i < n; ++i)
			for(int j = v; j >= a[i]; --j)
				dp[j] = max(dp[j], dp[j - a[i]] + c[i]);
		cout << dp[v] << endl;
	}	
	return 0;
}