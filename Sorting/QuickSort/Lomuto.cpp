#include <bits/stdc++.h>

using namespace std;

int lomutoPartition(int *arr, int l, int h) {
    int pivot = arr[h];
    int i = l - 1;
    for (int j=l;j<=h-1;j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    } 
    swap(arr[i+1], arr[h]);
    return (i + 1);
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];

    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }

    int pivot = lomutoPartition(arr, 0, n-1);

    cout << "The array is: " << endl;
    for (int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "The pivot is: " << pivot << endl;

    return 0;
}