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
		ll a[n], b[n];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		for(int i = 0; i < n; ++i)
			cin >> b[i];
		sort(a, a + n);
		sort(b, b + n);
		ll ans = 0;
		for(int i = 0; i < n; ++i)
			ans += a[i] * b[n - i - 1];
		cout << ans << endl;
	}
	return 0;
}