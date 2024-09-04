#include <bits/stdc++.h>
#define _sinusoid_() int main()
#define endl "\n"
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

vector<bool> isPrime(1000001, 1);

void sieve()
{
	isPrime[0] = isPrime[1] = 0;
	for(int i = 2; i <= 1000; ++i)
		for(int j = i * i; j <= 1000000; j += i)
			isPrime[j] = 0;
}

_sinusoid_()
{
	faster();
	sieve();
	int tc;
	cin >> tc;
	while(tc--)
	{
		int n, flag = 0;
		cin >> n;
		for(int i = 2; i <= n / 2; ++i)
			if(isPrime[i] && isPrime[n - i])
			{
				flag = 1;
				cout << i << " " << n - i << endl;
				break;
			}
		if(!flag)
			cout << -1 << endl;
	}
	return 0;
}