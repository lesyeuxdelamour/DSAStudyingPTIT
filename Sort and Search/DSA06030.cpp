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
		vector<vector<int>> v;
		for(int i = 0; i < n - 1; ++i)
		{
			int flag = 1;
			for(int j = 0; j < n - i - 1; ++j)
				if(a[j] > a[j + 1])
				{
					swap(a[j], a[j + 1]);
					flag = 0;
				}
			if(flag)
				break;
			vector<int> tmp;
			for(int j = 0; j < n; ++j)
				tmp.push_back(a[j]);
			v.push_back(tmp);
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