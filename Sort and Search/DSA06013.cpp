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
		int cnt = 0;
		for(int i = 0; i < n; ++i)
		{
			int x;
			cin >> x;
			if(x == k)
				cnt++;
		}
		if(cnt == 0)
			cout << -1 << endl;
		else
			cout << cnt << endl;
	}
	return 0;
}