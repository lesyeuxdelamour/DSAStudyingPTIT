#include <bits/stdc++.h>
#define _sinusoid_() int main()
#define endl "\n"
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool check(int a[], int b[], int n)
{
	int ave = b[0] + b[n - 1];
	for(int i = 0; i < n; ++i)
		if(a[i] + a[n - i - 1] != ave)
			return 0;
	return 1;
}

_sinusoid_()
{
	faster();
	int tc;
	cin >> tc;
	while(tc--)
	{
		int n;
		cin >> n;
		int a[n], b[n];
		for(int i = 0; i < n; ++i)
		{
			int x;
			cin >> x;
			a[i] = b[i] = x;	
		}
		sort(b, b + n);
		cout << (check(a, b, n) ? "Yes\n" : "No\n");
	}	
	return 0;
}