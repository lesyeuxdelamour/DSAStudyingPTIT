#include <bits/stdc++.h>
#define _sinusoid_() int main()
#define endl "\n"
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

string MIN(int s, int d)
{
	if(s == 0 && d == 1)
		return "0";
	if(s == 0 || d < s / 9)
		return "-1";
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
	return n;
}

string MAX(int s, int d)
{
	if(s == 0 && d == 1)
		return "0";
	if(s == 0 || d < s / 9)
		return "-1";
	string n;
	n = string(s / 9, '9');
	d -= s / 9;
	if(s % 9 > 0)
	{
		n = n + to_string(s % 9);
		d--;
	}
	n = n + string(d, '0');
	return n;
}

_sinusoid_()
{
	faster();
	int s, d;
	cin >> d >> s;
	cout << MIN(s, d) << " " << MAX(s, d) << endl;
	return 0;
}