#include <bits/stdc++.h>
#define _sinusoid_() int main()
#define endl "\n"
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

vector<string> v;
void fibo()
{
	v[0] = "A";
	v[1] = "B";
	for(int i = 3; i < 93; ++i)
		v[i] = v[i - 1] + v[i - 2];
}

_sinusoid_()
{
	faster();
	fibo();
	int tc;
	cin >> tc;
	while(tc--)
	{
		ll n, k;
		cin >> n >> k;
		cout << v[n - 1][k - 1] << endl;
	}
	return 0;
}