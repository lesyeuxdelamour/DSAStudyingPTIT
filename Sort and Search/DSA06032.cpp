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
		ll n, k;
		cin >> n >> k;
		ll a[n];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		ll ans = 0;
		sort(a, a + n);
		for(int i = 0; i < n - 2; ++i)
		{
			int l = i + 1, r = n - 1;
			while(l < r)
			{
				ll tmp = a[i] + a[l] + a[r];
				if(tmp < k)
				{
					ans += r - l;
					l++;
				}
				else
					r--;
			}
		}
		cout << ans << endl;
	}
	return 0;
}