#include <bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

// TC arr = {1 4 20 3 10 5} sum = 33

bool solve(vector<int> &arr, int sum) {
	int s = 0, curr = 0;
	for (int e = 0;e <arr.size();e++) {
		curr += arr[e];
		while (sum < curr) {
			curr -= arr[s];
			s++;
		}

		if (curr == sum) {
			return true;
		}
	}

	return false;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;

	vector<int> arr(n);

	for (auto &i : arr)
		cin >> i;

	int sum;
	cin >> sum;

	cout << ((solve(arr, sum)) ? "YES" : "NO") << endl;

}