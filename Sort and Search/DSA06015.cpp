#include <bits/stdc++.h>
#define _sinusoid_() int main()
#define endl "\n"
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

void merge_sort(vector<int> &v, int l, int r)
{
	if(l >= r)
		return;
	int m = (l + r) / 2;
	merge_sort(v, l, m);
	merge_sort(v, m + 1, r);
	vector<int> x(v.begin() + l, v.begin() + m + 1);
	vector<int> y(v.begin() + m + 1, v.begin() + r + 1);
	int i = 0, j = 0, idx = l;
	while(i < x.size() && j < y.size())
	{
		if(x[i] <= y[j])
		{
			v[idx] = x[i];
			i++;
		}
		else
		{
			v[idx] = y[j];
			j++;
		}
		idx++;
	}
	while(i < x.size())
	{
		v[idx] = x[i];
		i++;
		idx++;
	}
	while(j < y.size())
	{
		v[idx] = y[j];
		j++;
		idx++;
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
		vector<int> v(n);
		for(int i = 0; i < n; ++i)
			cin >> v[i];
		merge_sort(v, 0, n - 1);
		for(int i = 0; i < n; ++i)
			cout << v[i] << " ";
		cout << endl;
	}
	return 0;
}