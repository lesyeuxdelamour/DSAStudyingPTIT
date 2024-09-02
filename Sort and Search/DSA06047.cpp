#include <bits/stdc++.h>
#define _sinusoid_() int main()
#define endl "\n"
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool square(ll n)
{
	ll tmp = sqrt(n);
	return tmp * tmp == n;
}

bool Pytago(ll a[], int n, unordered_map<ll, int> mp)
{
	for(int i = 0; i < n - 1; ++i)
		for(int j = i + 1; j < n; ++j)
		{
			ll tmp = a[i] * a[i] + a[j] * a[j];
			if(square(tmp) && mp[sqrt(tmp)])
				return 1;
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
		int n;
		cin >> n;
		ll a[n];
		unordered_map<ll, int> mp;
		for(int i = 0; i < n; ++i)
		{
			cin >> a[i];
			mp[a[i]]++;
		}
		cout << (Pytago(a, n, mp) ? "YES" : "NO") << endl;
	}
	return 0;
}