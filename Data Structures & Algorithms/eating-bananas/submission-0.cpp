#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxElem(const vector<int>& arr) {
        return *max_element(arr.begin(), arr.end());
    }

    long long totalHours(const vector<int>& arr, int k) {
        long long totalH = 0;

        for(int i = 0; i < arr.size(); i++) {
            totalH += (arr[i] + k - 1) / k;
        }

        return totalH;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = maxElem(piles);

        while(low <= high) {
            int mid = low + (high - low) / 2;

            long long totalH = totalHours(piles, mid);

            if(totalH <= h) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};