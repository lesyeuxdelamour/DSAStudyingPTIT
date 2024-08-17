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
		int n, s, m;
		cin >> n >> s >> m;
		if((s - s / 7) * n > s * m)
			cout << (s * m + n - 1) / n << endl;
		else
			cout << -1 << endl;
	}
	return 0;
}