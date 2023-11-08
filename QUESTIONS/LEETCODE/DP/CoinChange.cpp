#include <iostream>
#include <vector>
using namespace std;

class Solution {

    int coinChangeRecursive(vector<int> &coins, int amount, int &i) {
	if (amount <= 0) {
		return 0;
	}

	for (int i=0;i<coins.size();i++) {}
    }
public:
    int coinChange(vector<int>& coins, int amount) {
	int i = 0;
	int coins = 0;
  	return coinChangeRecursive(coins, amount, i, coins);      
    }
};

int main() {
	int n;
	cin >> n; // this represents the number of denominations of the coin
	
	vector<int> arr(n);
	for (auto &i : arr) {
		cin >> i;
	} // inputting the denominations of coin for eg: [1, 2, 5]
	  
	int amount;
	cin >> amount;


	Solution S;
	cout << S.coinChange(arr, amount) << endl;


	return 0;
}
