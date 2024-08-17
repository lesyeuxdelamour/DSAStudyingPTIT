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
		int a[n], dd[10] = {};
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		sort(a, a + n, greater<int>());
		string x, y;
		for(int i = 0; i < n; ++i)
		{
			if(i & 1)
				x = to_string(a[i]) + x;
			else
				y = to_string(a[i]) + y;
		}
		cout << stoll(x) + stoll(y) << endl;
	}
	return 0;
}