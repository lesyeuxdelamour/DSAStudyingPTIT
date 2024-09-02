#include <bits/stdc++.h>
#define _sinusoid_() int main()
#define endl "\n"
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int decode(string s)
{
    if(s[0] == '0')
        return 0;
	int dp[s.size() + 1] = {};
	dp[0] = dp[1] = 1;
	for(int i = 2; i <= s.size(); ++i)	
	{
		if(s[i - 1] != '0')
			dp[i] += dp[i - 1];
		if(s[i - 2] == '1' || (s[i - 2] == '2' && s[i - 1] <= '6'))	
			dp[i] += dp[i - 2];		
	}
	return dp[s.size()];
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
		cout << decode(s) << endl;
	}
	return 0;
}