#include <bits/stdc++.h>

using namespace std;

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m, k;
	cin >> n >> m >> k;

	vector<int> applicants(n);
	for (auto &i: applicants)
		cin >> i;

	vector<int> appartments(m);
	for (auto &i : appartments)
		cin >> i;

	
	sort(applicants.begin(), applicants.end());
	sort(appartments.begin(), appartments.end());

	int i=0;
	int j=0;

	int count = 0;

	while (i < n) {
		while (j < m && appartments[j] < applicants[i] - k) {
			j++;
		}

		if (abs(appartments[j] - applicants[k]) <= k) {
			count++;
			i++;
			j++;
		} else {
			i++;
		}
	}

	cout << count;

    return 0;
}