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
		int dd[10] = {};
		for(int i = 0; i < n; ++i)
		{
			string s;
			cin >> s;
			for(int j = 0; j < s.size(); ++j)
				dd[s[j] - '0']++;
		}
		for(int i = 0; i < 10; ++i)
			if(dd[i])
				cout << i << " ";
		cout << endl;
	}
	return 0;
}