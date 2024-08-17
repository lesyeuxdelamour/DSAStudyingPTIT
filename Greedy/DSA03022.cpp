#include <bits/stdc++.h>
#define _sinusoid_() int main()
#define endl "\n"
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool cmp(int a, int b)
{
	return abs(a) > abs(b);
} 

_sinusoid_()
{
	faster();
	int m;
	cin >> m;
	vector<int> p, n;
	for(int i = 0; i < m; ++i)
	{
		int x;	
		cin >> x;
		if(x >= 0)
			p.push_back(x);
		else if(x < 0)
			n.push_back(x);
	}	
	sort(p.begin(), p.end(), cmp);
	sort(n.begin(), n.end(), cmp);
	if(n.empty())
		cout << max(p[0] * p[1], p[0] * p[1] * p[2]);
	else if(p.empty() || p[0] == 0)
		cout << n[0] * n[1];
	else
		cout << max(max(p[0] * n[0] * n[1], p[0] * p[1] * p[2]), p[0] * p[1]);
	return 0;
}