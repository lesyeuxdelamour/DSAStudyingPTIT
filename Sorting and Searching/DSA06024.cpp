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
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; ++i)
		cin >> a[i];
	for(int i = 0; i < n - 1; ++i)
	{
		int idx = i;
		for(int j = i + 1; j < n; ++j)
			if(a[j] < a[idx])
				idx = j;
		swap(a[i], a[idx]);
		cout << "Buoc " << i + 1 << ": "; 
		for(int j = 0; j < n; ++j)
			cout << a[j] << " ";
		cout << endl;
	}
	return 0;
}