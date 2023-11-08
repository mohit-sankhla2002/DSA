#include <bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;
const int mod = 1e9 + 7;
int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int ans = 1;
	for (int i=0;i<n;i++) {
		ans *= 2;
		ans %= mod;
	}
	cout << ans;
}