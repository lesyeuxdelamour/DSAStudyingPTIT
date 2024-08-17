#include <bits/stdc++.h>
#define _sinusoid_() int main()
#define endl "\n"
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int lengthofLIS(vector<int> &v)
{
	vector<int> ans;
	ans.push_back(v[0]);
	for(int i = 1; i < v.size(); ++i)
	{
		if(v[i] > ans.back())
			ans.push_back(v[i]);
		else
		{
			int low = lower_bound(ans.begin(), ans.end(), v[i]) - ans.begin();
			ans[low] = v[i];
		}
	}
	return ans.size();
}

_sinusoid_()
{
	faster();
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; ++i)
		cin >> v[i];
	cout << lengthofLIS(v);
	return 0;
}