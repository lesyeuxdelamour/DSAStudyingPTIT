#include <bits/stdc++.h>
#define _sinusoid_() int main()
#define endl "\n"
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

string solve(int a[], int n, unordered_map<int, int> mp)
{
	for(int i = 0; i < n; ++i)
		if(mp[a[i]] > 1)
			return to_string(a[i]);
	return "NO";
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
		int a[n];
		unordered_map<int, int> mp;
		for(int i = 0; i < n; ++i)
		{
			cin >> a[i];
			mp[a[i]]++;
		}
		cout << solve(a, n, mp) << endl;
	}
	return 0;
}