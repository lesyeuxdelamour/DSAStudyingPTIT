#include <bits/stdc++.h>
#define _sinusoid_() int main()
#define endl "\n"
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll binPow(ll n, ll p)
{
    if(p == 1)
		return n;
    ll res = binPow(n, p >> 1) % MOD;
    res = (res * res) % MOD;
    if(p & 1) 
		res = (res * n) % MOD;
    return res % MOD;
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
		cout << binPow(n, k) << endl;
	}
	return 0;
}