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
	int n;
	cin >> n;
	vector<int> v(n), a, b;
	for(int i = 0; i < n; ++i)
		cin >> v[i];
	for(int i = 0; i < n; i += 2)
		a.push_back(v[i]);
	for(int i = 1; i < n; i += 2)
		b.push_back(v[i]);
	sort(a.begin(), a.end(), less<int>());
	sort(b.begin(), b.end(), greater<int>());
	for(int i = 0; i < n / 2; ++i)
		cout << a[i] << " " << b[i] << " ";
	if(n & 1)
		cout << a.back();
	return 0;
}