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
	int n, x; // number of children and maximum allowed weight on the gondola
	cin >> n >> x;

	vector<int> arr(n);

	for (auto &i : arr) {
		cin >> i;
	}

	sort(arr.begin(), arr.end(), greater<int>());
	
	// for (int i=0;i<n;i++) {
	// 	cerr << arr[i] << " ";
	// }

	int i = 0;
	int j = n - 1;
	int count = 0;

	while (i <= j) {
		if (arr[i] + arr[j] <= x) {
			i++;
			j--;
		} else {
			i++;
		}
		count++;
	}

	cout << count << endl;

	return 0;
}