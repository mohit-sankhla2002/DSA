#include <bits/stdc++.h>
#define int long long int 
using namespace std;



int32_t main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }

    int maxSum = INT_MIN;
    int sum = 0;

    for (int i=0;i<n;i++) {
        sum += arr[i];
        maxSum = max(maxSum, sum);
        if (sum < 0) {
            sum = 0;
        }
    }

    cout << maxSum << endl;

    return 0;
}