#include <bits/stdc++.h>
#define _sinusoid_() int main()
#define endl "\n"
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int flag = 0;
int a[11][11];
int dx[2] = {1, 0};
int dy[2] = {0, 1};
string ans, s = "DR";

void Init()
{
	flag = 0;
	ans = "";
}

void Try(int i, int j, int n)
{
	if(i == n - 1 && j == n - 1)
	{
		cout << ans << " ";
		flag = 1;
		return;
	}
	for(int k = 0; k < 2; ++k)
	{
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 < n && j1 < n && a[i1][j1])
		{
			ans.push_back(s[k]);
			Try(i1, j1, n);
			ans.pop_back();
		}
	}
}

_sinusoid_()
{
	faster();
	int tc;
	cin >> tc;
	while(tc--)
	{
		int n;
		cin >> n;
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < n; ++j)
				cin >> a[i][j];
		if(a[0][0] == 0 || a[n - 1][n - 1] == 0)
			cout << -1;
		else
		{
			Init();
			Try(0, 0, n);
			if(!flag)
				cout << -1;
		}
		cout << endl;
	}
	return 0;
}