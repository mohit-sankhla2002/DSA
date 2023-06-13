## Problem Link 
https://leetcode.com/problems/equal-row-and-column-pairs/ 

## Brute Force Approach 
Just compare each row with each column. 
Time Complexity will be O(cube(n)).
`
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        int count = 0;
        for (int i=0;i<n;i++) {
            // ith row 
            vector<int> arr = grid[i];
            for (int j=0;j<n;j++) {
                bool isEqual = true;
                for (int k=0;k<n;k++) {
                    if (arr[k] != grid[k][j]) {
                        isEqual = false;
                        break;
                    }
                }
                if (isEqual) {
                    count++;
                }
            }
        }
        return count;
    }
};
`

## Optimised Approach - 1 (using hashmap)
Create a hash map and store the frequency of every row in it. Then we iterate for the cols.If the frequency is more than one, then we can say that it is present in both rows and cols. Therefore we increment count. 

`
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
`



## Optimised Approach - 2 (using Tries)








