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
		int idx = s.size() - 1;
		while(s[idx] == '1')
		{
			s[idx] = '0';
			idx--;
		}	
		if(idx >= 0)
			s[idx] = '1';
		cout << s << endl;
	}
	return 0;
}