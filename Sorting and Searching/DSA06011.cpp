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
		int a[n];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		int ans = 1e6;
		for(int i = 0; i < n - 1; ++i)
			for(int j = i + 1; j < n; ++j)
				if(abs(ans) > abs(a[i] + a[j]))
					ans = a[i] + a[j];
		cout << ans << endl;
	}
	return 0;
}