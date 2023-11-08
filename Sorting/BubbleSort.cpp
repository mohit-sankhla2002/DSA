#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(vector<int> &arr, int n) {
	for (int i=0;i<n-1;i++) {
		for (int j=0;j<n-i-1;j++) {
			if (arr[j] > arr[j+1]) {
				swap(arr[j], arr[j+1]);
			}
		}
	}
}

int main() {
	int n;
	cin >> n;

	vector<int> arr(n);

	for (auto &i : arr) {
		cin >> i;
	}
	
	bubbleSort(arr, n);

	for (auto &i : arr) {
		cout << i << " ";
	}

	return 0;
}
