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
		sort(a, a + n);
		if(a[0] == a[n - 1])
			cout << -1;
		else
		{
			cout << a[0] << " "; 
			int idx = 1;
			while(a[idx] == a[idx - 1])
				idx++;
			cout << a[idx];
		}
		cout << endl;
	}
	return 0;
}