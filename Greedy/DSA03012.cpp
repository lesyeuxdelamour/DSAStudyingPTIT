#include <bits/stdc++.h>
#define _sinusoid_() int main()
#define endl "\n"
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int check(string s)
{
	int n = s.size() - s.size() / 2;
	unordered_map<char, int> mp;
	for(auto x : s)
		mp[x]++;
	for(auto x : mp)
		if(x.second > n)
			return -1;
	return 1;
}

_sinusoid_()
{
	faster();
	int tc;
	cin >> tc;
	while(tc--)
	{
		string s;
		cin >> s;
		cout << check(s) << endl;
	}
	return 0;
}