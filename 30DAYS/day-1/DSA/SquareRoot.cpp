#include <bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int solveNaive(int n) {
	int ans = 1;
	while (ans * ans < n) {
		ans++;
	}

	if (ans * ans == n) {
		return ans;
	} else {
		return ans - 1;
	}
}

int solve(int n) {
	int low = 1;
	int high = n;

	int mid = low + (high - low) / 2;

	while (low <= high) {
		int mSq = mid * mid;
		if (mSq == n) {
			return mid;
		} else if (mSq > n) {
			high = mid - 1;
		} else {
			low = mid + 1;
		}

		mid = low + (high - low) / 2;
	}

	return mid - 1;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;

	cout << solve(n) << endl;

}