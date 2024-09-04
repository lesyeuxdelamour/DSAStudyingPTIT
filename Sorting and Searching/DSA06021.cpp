#include <bits/stdc++.h>
#define _sinusoid_() int main()
#define endl "\n"
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int search(int a[], int l, int r, int k)
{
	while(l <= r)
	{
		int m = l + (r - l) / 2;
		if(a[m] == k)
			return m;
		if(a[l] <= a[m])
		{
			if(a[l] <= k && k <= a[m])
				r = m - 1;
			else
				l = m + 1;
		}
		else
		{
			if(a[m] <= k && k <= a[r])
				l = m + 1;
			else
				r = m - 1; 
		}
	}
	return -1;
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
		int a[n];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		cout << search(a, 0, n - 1, k) + 1 << endl;
	}
	return 0;
}