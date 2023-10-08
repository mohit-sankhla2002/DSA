#include <bits/stdc++.h>
#define int long long int 
using namespace std;

const int mod = 1e9 + 7;

int normalPower(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b & 1) res = res * a;
        a = a * a;
        b = b >> 1;
    }

    return res;
}

int modPower(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b & 1) res = ((res % mod) * (a % mod)) % mod;
        a = ((a % mod) * (a % mod)) % mod;
        b = b >> 1;
    }

    return res;
}

int32_t main()
{
    int n;
    cin >> n;

    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;

        int pwr = normalPower(b, c);
        cout << modPower(a, pwr) << endl;
    }   
    return 0;
}