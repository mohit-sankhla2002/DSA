#include <bits/stdc++.h>

#define int long long int 

using namespace std;

const int MOD = 1e9 + 7;

// algorithm for fast exponentiation
int power(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b & 1) {
            // odd
            res = ((res % MOD) * (a % MOD)) % MOD;
        }

        a = ((a % MOD) * (a % MOD)) % MOD;
        b = b >> 1;
    }


    return res;
}

int32_t main() {
    int n;
    cin >> n;

    while (n--) {
        int a, b;
        cin >> a >> b;

        cout << power(a, b) << endl;
    }



    return 0;
}