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
	int tc;
	cin >> tc;
	while(tc--)
	{
		int n, a, b, flag = 0;
		cin >> n;
		for(int i = 0; i <= n / 7; i++)
			if((n - 4 * i) % 7 == 0)
			{
				flag = 1;
				a = i;
				b = (n - 4 * i) / 7;
				break;
			}
		if(!flag)
			cout << -1;
		else
			cout << string(a, '4') + string(b, '7');
		cout << endl;
	}	
	return 0;
}