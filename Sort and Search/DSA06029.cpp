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
	int n;
	cin >> n;
	int a[n];
	multiset<int> se;
	vector<vector<int>> v(n);
	for(int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		se.insert(x);
		for(auto x : se)
			v[i].push_back(x);
	}
	for(int i = v.size() - 1; i >= 0; --i)
	{
		cout << "Buoc " << i << ": ";
		for(int j = 0; j < v[i].size(); ++j)
			cout << v[i][j] << " ";
		cout << endl;
	}
	return 0;
}