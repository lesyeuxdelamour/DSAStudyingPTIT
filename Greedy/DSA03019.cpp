#include <bits/stdc++.h>
#define _sinusoid_() int main()
#define endl "\n"
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

void Do(ll p, ll q)
{
	while(1)
	{
		if(q % p == 0)
		{
			cout << "1/" << q / p << endl;
			return;
		}
		ll x = q / p + 1;
		cout << "1/" << x << " + ";
		p = p * x - q;
		q = q * x;
	}
}

_sinusoid_()
{
	faster();
	int tc;
	cin >> tc;
	while(tc--)
	{
		ll p, q, n;
		cin >> p >> q;
		Do(p, q);
	}
	return 0;
}