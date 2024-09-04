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
		vector<vector<int>> v(n - 1);
		for(int i = 0; i < n - 1; ++i)
		{
			for(int j = i + 1; j < n; ++j)
				if(a[i] > a[j])
					swap(a[i], a[j]);
			for(int j = 0; j < n; ++j)
				v[i].push_back(a[j]);
		}
		for(int i = v.size() - 1; i >= 0; --i)
		{
			cout << "Buoc " << i + 1 << ": ";
			for(int j = 0; j < v[i].size(); ++j)
				cout << v[i][j] << " ";
			cout << endl;
		}
	}
	return 0;
}