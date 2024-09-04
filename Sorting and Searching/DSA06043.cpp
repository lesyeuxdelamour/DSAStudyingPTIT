#include <bits/stdc++.h>
#define _sinusoid_() int main()
#define endl "\n"
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int solve(ll ps[], int n)
{
	for(int i = 1; i <= n; ++i)
		if(ps[i - 1] == ps[n] - ps[i])
			return i;
	return -1;
}

_sinusoid_()
{
	faster();
	int tc;
	cin >> tc;
	while(tc--)
	{
		int n;
		cin >> n;
		ll ps[n + 1] = {};
		for(int i = 1; i <= n; ++i)
		{
			int x;
			cin >> x;
			ps[i] = ps[i - 1] + x;
		}
		cout << solve(ps, n) << endl;
	}
	return 0;
}