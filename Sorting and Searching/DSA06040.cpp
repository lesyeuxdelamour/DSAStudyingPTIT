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
		int n, m, k;
		cin >> n >> m >> k;
		ll a[n], b[m], c[k];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		for(int i = 0; i < m; ++i)
			cin >> b[i];
		for(int i = 0; i < k; ++i)
			cin >> c[i];
		int x = 0, y = 0, z = 0;
		int flag = 0;
		while(x < n && y < m && z < k)
		{
			if(a[x] == b[y] && b[y] == c[z])
			{
				flag = 1;
				cout << b[y] << " ";
				x++;
				y++;
				z++;
			}
			else if(a[x] < b[y])
				x++;
			else if(b[y] < c[z])
				y++;
			else
				z++;
		}
		if(!flag)
			cout << -1;
		cout << endl;
	}
	return 0;
}