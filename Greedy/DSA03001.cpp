#include <bits/stdc++.h>
#define _sinusoid_() int main()
#define endl "\n"
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int change(int n)
{
	int cnt = 0, idx = 9;
	int val[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	while(n)
	{
		cnt += n / val[idx];
		n %= val[idx];
		idx--;
	}
	return cnt;
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
		cout << change(n) << endl;
	}
	return 0;
}