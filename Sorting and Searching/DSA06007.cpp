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
		vector<int> a(n), b(n);
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		b = a;
		sort(b.begin(), b.end());
		int l = 0, r = n - 1;
		while(a[l] == b[l])
			l++;
		while(a[r] == b[r])
			r--;
		cout << l + 1 << " " << r + 1 << endl;
	}
	return 0;
}