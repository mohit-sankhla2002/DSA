#include <iostream>

using  namespace std;

void insertionSort(vector<int> &arr, int n) {
	for (int i=1;i<n;i++) {
		// taking out the key 
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j+1] = arr[j];
			j--;
		} 

		arr[j+1] = key;
	}
}

int main() {
	int n;
	cin >> n;

	vector<int> arr(n);
	for (auto &i : arr) {
		cin >> i;
	}

	insertionSort(arr, n);

	for (auto i : arr)
		cout << i << " ";


}
