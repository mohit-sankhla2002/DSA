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
		int n;
		cin >> n;

		vector<int> arr(n);
		int minIndex = -1;
		int mini = INT_MAX;
		for (int i=0;i<n;i++) {
			cin >> arr[i];
			if (arr[i] < mini) {
				mini = arr[i];
				minIndex = i;
			}
		}

		arr[minIndex]++;

		int ans = 1;
		for (int i=0;i<n;i++) {
			ans *= arr[i];
		}


		cout << ans << endl;


	}

}