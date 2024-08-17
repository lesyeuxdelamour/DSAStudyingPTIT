#include <bits/stdc++.h>
#define _sinusoid_() int main()
#define endl "\n"
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll P[1001][1001] = {};

void sieve()
{
	for(int i = 0; i <= 1000; ++i)
		for(int j = 0; j <= i; ++j)
			if(j == 0)
				P[i][j] = 1;
			else
				P[i][j] = (P[i - 1][j] + j * P[i - 1][j - 1]) % MOD;
}

_sinusoid_()
{
	faster();
	sieve();
	int tc;
	cin >> tc;
	while(tc--)
	{
		int n, k;
		cin >> n >> k;
		cout << P[n][k] << endl;
	}
	return 0;
}