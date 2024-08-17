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
		int n, x;
		cin >> n;
		pair<int, int> a[n];
		for(int i = 0; i < n; ++i)
			cin >> x >> a[i].first >> a[i].second;
		sort(a, a + n, [](pair<int, int> a, pair<int, int> b)
			{
				return a.second > b.second;
			}
			);
		int cnt = 0, total = 0;
		bitset<1001> bs;
		for(auto x : a)
		{
			while(bs[x.first] && x.first)
				x.first--;
			if(!bs[x.first] && x.first)
			{
				cnt++;
				total += x.second;
				bs[x.first] = 1;	
			}	
		}
		cout << cnt << " " << total << endl;	
	}
	return 0;
}