#include <bits/stdc++.h>
#define _sinusoid_() int main()
#define endl "\n"
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int cnt;
int col[11], d1[21], d2[21];

void Init()
{
	cnt = 0;
	memset(col, 1, sizeof(col));
	memset(d2, 1, sizeof(d1));
	memset(d1, 1, sizeof(d2));
}

void Try(int i, int n)
{
	if(i == n)
	{
		cnt++;
		return;
	}
	for(int j = 0; j < n; ++j)
		if(col[j] && d1[i - j + n - 1] && d2[i + j])
		{
			col[j] = d1[i - j + n - 1] = d2[i + j] = 0;
			Try(i + 1, n);
			col[j] = d1[i - j + n - 1] = d2[i + j] = 1;
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
		Init();
		Try(0, n);
		cout << cnt << endl;
	}
	return 0;
}