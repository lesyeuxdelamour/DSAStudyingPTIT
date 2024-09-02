#include <bits/stdc++.h>
#define _sinusoid_() int main()
#define endl "\n"
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool solve(ll a[], int n, int k)
{
	sort(a, a + n);
	for(int i = 0; i < n - 2; ++i)
	{
		int l = i + 1, r = n - 1;
		while(l < r)
		{
			if(a[i] + a[l] + a[r] == k)
				return 1;
			else if(a[i] + a[l] + a[r] < k)
				l++;
			else if(a[i] + a[l] + a[r] > k)
				r--;
		}
	}
	return 0;
}

_sinusoid_()
{
	faster();
	int tc;
	cin >> tc;
	while(tc--)
	{
		int n, k;
		cin >> n >> k;
		ll a[n];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		cout << (solve(a, n, k) ? "YES" : "NO")	 << endl;
	}
	return 0;
}