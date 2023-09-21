// https://leetcode.com/problems/pascals-triangle/

#include <bits/stdc++.h>

using namespace std;

// what if we are asked the element at the ith row and the jth column in the pascal's triangle

// You see pascal's triangle resembles the nCr forumula
// the first row of the pascal's triangle is 0C0
// the second row is 1C0 1C1
// the third row is 2C0 2C1 2C2

// we can also be asked to print the nth row of the pascal's triangle

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for (int i=0;i<numRows;i++) {
            if (i == 0) {
                ans.push_back({1});
            } else if (i == 1) {
                ans.push_back({1, 1});
            } else {
                vector<int> temp;
                temp.push_back(1);

                for (int j=1;j<i;j++) {
                    int val = ans[i-1][j] + ans[i-1][j-1];
                    temp.push_back(val);
                }

                temp.push_back(1);
                ans.push_back(temp);
            }
        }

        return ans;
    }
};