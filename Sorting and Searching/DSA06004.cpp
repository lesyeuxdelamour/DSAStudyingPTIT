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
		int a[n], b[m];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		for(int i = 0; i < m; ++i)
			cin >> b[i];
		int x = 0, y = 0;
		vector<int> uni, inter;
		while(x < n && y < m)
			if(a[x] == b[y])
			{
				inter.push_back(a[x]);
				uni.push_back(b[y]);
				x++;
				y++;
			}
			else if(a[x] < b[y])
			{
				uni.push_back(a[x]);
				x++;
			}
			else if(a[x] > b[y])
			{
				uni.push_back(b[y]);
				y++;
			}
		while(x < n)
			uni.push_back(a[x++]);
		while(y < m)
			uni.push_back(b[y++]);
		for(auto x : uni)
			cout << x << " ";
		cout << endl;
		for(auto x : inter)
			cout << x << " ";
		cout << endl;
	}
	return 0;
}