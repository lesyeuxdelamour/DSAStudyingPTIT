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
	multiset<int> se;
	for(int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		se.insert(x);
		cout << "Buoc " << i << ": ";
		for(auto x : se)
			cout << x << " ";
		cout << endl;
	}
	return 0;
}