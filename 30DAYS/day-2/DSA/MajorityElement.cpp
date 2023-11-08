// https://practice.geeksforgeeks.org/batch/dsa-4/track/DSASP-Searching/problem/majority-element-1587115620

#include <bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

class NaiveSolution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        vector<int> freq(1e7 + 1, 0);
        for (int i=0;i<size;i++) {
            freq[a[i]]++;
        }
        
        int maxi = INT_MIN;
        int idx = -1;
        
        for (int i=0;i<freq.size();i++) {
            if (freq[i] > maxi) {
                maxi = freq[i];
                idx = i;
            }
        }
        
        if (maxi > size / 2) {
            return idx;
        } else {
            return -1;
        }
    }
};

class Solution{
  public:
    int majorityElement(int a[], int size)
    {
        int votes = 0;
        int candidate = -1;
        
        for (int i=0;i<size;i++) {
            if (votes == 0) {
                candidate = a[i];
                votes = 1;
            } else {
                if (a[i] == candidate) {
                    votes++;
                } else {
                    votes--;
                }
            }
        }
        
        votes = 0;
        for (int i=0;i<size;i++) {
            if (a[i] == candidate) {
                votes++;
            }
        }
        
        if (votes > size / 2) {
            return candidate;
        } else {
            return -1;
        }
    }
};

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;

	int *arr = new int(n);

	for (int i=0;i<n;i++) {
		cin >> arr[i];
	}

	Solution s;
	cout << s.majorityElement(arr, n) << endl;
}

