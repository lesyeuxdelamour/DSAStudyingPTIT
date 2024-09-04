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
		int n, m;
		cin >> n >> m;
		int a[n + m];
		for(int i = 0; i < n + m; ++i)
			cin >> a[i];
		sort(a, a + n + m);
		for(int i = 0; i < n + m; ++i)
			cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}