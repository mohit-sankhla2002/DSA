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
		int points = 0;
		for (int i=0;i<10;i++) {
			for (int j=0;j<10;j++) {
				char symbol;
				cin >> symbol;

				if (symbol == 'X') {
					int x = i;
					int y = j;

					if (x > 4) {
						x = 9 % x;
					}
					if (y > 4) {
						y = 9 % y;
					}

					if (x == 0 || y == 0) {
						points += 1;
					} else if ((x == 1 && y > 0) || (y == 1 && x > 0)) {
						points += 2;
					} else if ((x == 2 && y > 1) || (y == 2 && x > 1)) {
						points += 3;
					} else if ((x == 3 && y > 2) || (y == 3 && x > 2)) {
						points += 4;
					} else {
						points += 5;
					}
				}
			}
		}
		cout << points << endl;
	}
	// 	for (int i=0;i<10;i++) {
	// 		for (int j=0;j<10;j++) {
	// 			cout << matrix[i][j] << " ";
	// 		}
	// 		cout << "\n";
	// 	}
	// }

}