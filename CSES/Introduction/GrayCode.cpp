#include <bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

vector<string> get(int n) {
	vector<string> ans;
	if (n == 1) {
		ans.pb("0");
		ans.pb("1");
		return ans;
	}

	vector<string> previous = get(n - 1);
	for (int i=0;i<previous.size();i++) {
		string str = "0";
		str += previous[i];
		ans.push_back(str);
	}

	for (int i=previous.size() - 1;i >= 0;i--) {
		string str = "1";
		str += previous[i];
		ans.push_back(str);
	}

	return ans;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;

	vector<string> ans = get(n);

	for (auto str : ans) 
		cout << str << endl;

	return 0;
}