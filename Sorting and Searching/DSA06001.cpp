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
		sort(a, a + n, greater<int>());
		for(int i = 0; i < n / 2; ++i)
			cout << a[i] << " " << a[n - i - 1] << " ";
		if(n & 1)
			cout << a[n / 2 + 1];
		cout << endl;
	}
	return 0;
}