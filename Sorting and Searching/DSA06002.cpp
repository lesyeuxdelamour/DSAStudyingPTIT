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
		pair<int, int> a[n];
		for(int i = 0; i < n; ++i)
		{
			cin >> a[i].first;
			a[i].second = abs(k - a[i].first);
		}
		stable_sort(a, a + n, [](pair<int, int> a, pair<int, int> b)
			{
				return a.second < b.second;
			}
			);
		for(int i = 0; i < n; ++i)
			cout << a[i].first << " ";
		cout << endl;
	}
	return 0;
}