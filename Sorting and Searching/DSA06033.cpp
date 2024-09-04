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
		int a[n], MAX[n];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		MAX[n - 1] = a[n - 1];
		for(int i = n - 2; i >= 0; --i)
			MAX[i] = max(MAX[i + 1], a[i]);
		int ans = -1, x = 0, y = 0;
		while(x < n && y < n)
			if(MAX[x] > a[y])
			{
				ans = max(ans, x - y);
				x++;
			}
			else
				y++;
		cout << ans << endl;
	}
	return 0;
}