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
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		deque<int> dq;
		for(int i = 0; i < n; ++i)
		{
			while(!dq.empty() && a[dq.back()] <= a[i])
				dq.pop_back();
			dq.push_back(i);
			while(dq.front() + k <= i)
				dq.pop_front();
			if(i >= k - 1)
				cout << a[dq.front()] << " ";
		}
		cout << endl;
	}
	return 0;
}