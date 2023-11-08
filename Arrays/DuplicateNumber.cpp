#include <bits/stdc++.h>

using namespace std;

class Solution {
    public: 
        int findDuplicate(vector<int> &nums) {
            int slow = nums[0];
            int fast = nums[0];

            do {
                slow = nums[slow];
                fast = nums[nums[fast]];
            } while (slow != fast);

            fast = nums[0];

            while (slow != fast) {
                slow = nums[slow];
                fast = nums[fast]; 
            }


            return slow;
        }
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        Solution s;
        int n;
        cin >> n;

        vector<int> arr(n);

        for (auto &i : arr) {
            cin >> i;
        }

        cout << s.findDuplicate(arr) << endl;
    }
    return 0;
}
