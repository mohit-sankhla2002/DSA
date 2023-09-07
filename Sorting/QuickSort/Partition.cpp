#include <bits/stdc++.h>
using namespace std;

void printArr(int *arr, int n) {
    for (int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout <<"\n";
}

void part(int *arr, int l, int h, int p) {
    int temp[h - l + 1];
    int index = 0;

    for (int i=l;i<=h;i++) {
        if (arr[i] <= arr[p]) {
            temp[index] = arr[i];
            index++;
        }
    }

    for (int i=l;i<=h;i++) {
        if (arr[i] > arr[p]) {
            temp[index] = arr[i];
            index++;
        }
    }

    for (int i=l;i<=h;i++) {
        arr[i] = temp[i-l];
    }
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    part(arr, 0, n - 1, k);

    printArr(arr, n);

    return 0;
}