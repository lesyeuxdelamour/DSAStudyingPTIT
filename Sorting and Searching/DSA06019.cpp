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
		unordered_map<int, int> mp;
		for(int i = 0; i < n; ++i)
		{
			int x;
			cin >> x;
			mp[x]++;
		}
		vector<pair<int, int>> v;
		for(auto x : mp)
			v.push_back(x);
		sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b)
			{
				if(a.second == b.second)
					return a.first < b.first;
				return a.second > b.second;
			}
			);
		for(auto x : v)
			for(int i = 0; i < x.second; ++i)
				cout << x.first << " ";
		cout << endl;
	}
	return 0;
}