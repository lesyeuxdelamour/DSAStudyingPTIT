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
	unordered_map<int, int> mp;
	while(cin >> n)
		if(!mp[n])
		{
			cout << n << " ";
			mp[n] = 1;
		}
	return 0;
}