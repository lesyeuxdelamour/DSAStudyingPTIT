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
		int a[n], inc[n] = {}, dec[n] = {};
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		for(int i = 1; i < n; ++i)
			if(a[i - 1] < a[i])
				inc[i] = inc[i - 1] + 1;
		for(int i = n - 2; i >= 0; --i)
			if(a[i] > a[i + 1])
				dec[i] = dec[i + 1] + 1;
		int ans = 0;
		for(int i = 0; i < n; ++i)
			ans = max(ans, inc[i] + dec[i] + 1);
		cout << ans << endl;
	}
	return 0;
}