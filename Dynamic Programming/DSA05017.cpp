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
		int n;
		cin >> n;
		int a[n], inc[n], dec[n];
		for(int i = 0; i < n; ++i)
		{
			cin >> a[i];
			inc[i] = dec[i] = a[i];
		}
		for(int i = 1; i < n; ++i)
			for(int j = 0; j < i; ++j)
				if(a[i] > a[j] && inc[i] < inc[j] + a[i])
					inc[i] = inc[j] + a[i];
		for(int i = n - 2; i >= 0; --i)
			for(int j = n - 1; j > i; --j) 		
				if(a[i] > a[j] && dec[i] < dec[j] + a[i])
					dec[i] = dec[j] + a[i];
		int ans = 0;
		for(int i = 0; i < n; ++i)
			ans = max(ans, inc[i] + dec[i] - a[i]);
		cout << ans << endl;	
	}
	return 0;
}