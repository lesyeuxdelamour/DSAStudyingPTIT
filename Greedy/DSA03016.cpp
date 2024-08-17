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
		int s, d;
		cin >> s >> d;
		if(s == 0 && d == 1)
			cout << 0;
		if(s == 0 || d < s / 9)
			cout << -1;
		else //dùng stack hay hơn nhưng mà lúc đấy chưa học =)))
		{
    		s--;
    		string n;
    		n = string(s / 9, '9');
    		d -= s / 9;
    		if(s % 9 > 0)
    		{
    			n = to_string(s % 9) + n;
    			d--;
    		}
    		n = string(d, '0') + n;
    		n[0]++;
    		cout << n;
		}
		cout << endl;
	}
	return 0;
}