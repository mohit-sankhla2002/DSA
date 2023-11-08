#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(vector<int> &arr, int n) {
	for (int i=0;i<n-1;i++) {
		bool swapped = false;
		for (int j=0;j<n-i-1;j++) {
			if (arr[j] > arr[j+1]) {
				swap(arr[j], arr[j+1]);
				swapped = true;
			}
		}

		if (swapped == false) {
			break;
			// this means that the array is already sorted
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
