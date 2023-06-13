// https://leetcode.com/problems/equal-row-and-column-pairs/ 
// Daily Challenge 13 June 2023

#include <bits/stdc++.h>

using namespace std;

// BRUTE FORCE O(N^3)
// class Solution {
// public:
//     int equalPairs(vector<vector<int>>& grid) {
//         int n = grid.size();
//         int count = 0;
//         for (int i=0;i<n;i++) {
//             // ith row 
//             vector<int> arr = grid[i];
//             for (int j=0;j<n;j++) {
//                 bool isEqual = true;
//                 for (int k=0;k<n;k++) {
//                     if (arr[k] != grid[k][j]) {
//                         isEqual = false;
//                         break;
//                     }
//                 }
//                 if (isEqual) {
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };

// OPTIMUM SOLUTION: O(n^2)
class Solution {
private: 
    string toString(int n) {
        string ans = "";
        while (n > 0) {
            int digit = n % 10;
            n /= 10;
            char d = digit + '0';
            ans = d + ans;
        }

        return ans + ",";
    }
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        int count = 0;
        unordered_map<string, int> mp;
        for (int i=0;i<n;i++) {
            string temp = "";
            for (int j=0;j<n;j++) {
                temp += toString(grid[i][j]);
            }
            mp[temp]++;
        }

        for (int i=0;i<n;i++) {
            string temp = "";
            for (int j=0;j<n;j++) {
                temp += toString(grid[j][i]);
            }

            cout << temp << ": " << mp[temp] << endl;

            if (mp[temp] >= 1) {
                count += mp[temp];
            }
        }

        return count;
    }
};




int main()
{
	int n;
	cin >> n;

	vector<vector<int> > arr(n, vector<int> (n, 0));
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			cin >> arr[i][j];
		}
	}

	Solution s;
	cout << s.equalPairs(arr) << endl;

	return 0;
}
