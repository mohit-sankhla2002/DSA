#include <bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;

	while (t--) {
		int n, k;
		cin >> n >> k;

		string s;
		cin >> s;

		int b = 0;
		int w = 0;

		for (int i=0;i<k;i++) {
			if (s[i] == 'B') {
				b++;
			} else {
				w++;
			}
		}

		int count = 0;

		
	}
}