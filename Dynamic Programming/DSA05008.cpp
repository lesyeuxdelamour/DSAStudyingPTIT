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
		int a[n];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		bitset<40001> dp;
		dp[0] = 1;
		for(int i = 0; i < n; ++i)
			for(int j = k; j >= a[i]; --j)
				if(dp[j - a[i]])
					dp[j] = 1;
		cout << (dp[k] ? "YES" : "NO") << endl;
	}
	return 0;
}