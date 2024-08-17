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
		int n, k, ans = 0;
		cin >> n >> k;
		k = min(k, n - k);
		int a[n];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		sort(a, a + n);
		for(int i = 0; i < k; ++i)
			ans -= a[i];
		for(int i = k; i < n; ++i)
			ans += a[i];
		cout << ans << endl;
	}
	return 0;
}