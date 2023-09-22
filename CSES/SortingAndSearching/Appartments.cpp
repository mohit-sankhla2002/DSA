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
	int n, m, k;
	cin >> n >> m >> k;

	vector<int> applicants(n);
	for (auto &i: applicants)
		cin >> i;

	vector<int> appartments(n);
	for (auto &i : appartments)
		cin >> i;

	int count=0;
	sort(applicants.begin(), applicants.end());
	sort(appartments.begin(), appartments.end());

	int first=0,second=0;
    while(first<n&&second<m){
        if(abs(applicants[first]-appartments[second])<=k){
            count++;
            first++;
            second++;
        }
        else if(applicants[first]>appartments[second]){
            second++;
        }
        else{
            first++;
        }
    }
    cout<<count<<endl;
    return 0;
}