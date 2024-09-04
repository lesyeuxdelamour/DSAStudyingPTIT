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
		string s;
		cin >> s;
		ll sum = 0;
		for(int i = 0; i < s.size(); ++i)
		{
			string tmp = {};
			for(int j = i; j < s.size(); ++j)
			{
				tmp += s[j];
				sum += stoll(tmp);
			}
		}
		cout << sum << endl;
	}
	return 0;
}