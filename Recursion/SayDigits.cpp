#include <bits/stdc++.h>
using namespace std;

void sayDigits(int n) {
    // base case 
    if (n == 0) {
        return;
    }

    string sayings[] = {
        "zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "ten",
    };

    int num = n % 10;

    sayDigits(n / 10);

    cout << sayings[num] << " ";
}

int main() {
    int n;
    cin >> n;
    sayDigits(n);
    cout << endl;
    return 0;
}