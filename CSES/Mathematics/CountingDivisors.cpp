#include <bits/stdc++.h>

using namespace std;

int main() {
    const int maxValue = 1e6 + 1;
    vector<int> counter(maxValue, 0);

    for (int i=1;i<maxValue;i++) {
        for (int j=i;j<maxValue;j+=i) {
            counter[j]++;
        }
    }

    int n;
    cin >> n;

    while (n--) {
        int x;
        cin >> x;

        cout << counter[x] << endl;
    }


    return 0;
}