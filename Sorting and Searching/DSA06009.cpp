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
		int dd[1001] = {};
		for(int i = 0; i < n; ++i)
		{
			int x;
			cin >> x;
			dd[x]++;	
		}
		int ans = 0;
		if(!(k & 1))
		{
			ans += dd[k / 2] * (dd[k / 2] - 1) / 2;
			dd[k / 2] = 0;
		}
		for(int i = 0; i <= k; ++i)
		{
			ans += dd[i] * dd[k - i];
			dd[i] = dd[k - i] = 0;
  		}
  		cout << ans << endl;
	}
	return 0;
}