class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int l = 0, r = n - 1;
        int maxA = 0;
        while(l<r) {
            int h = min(heights[l], heights[r]);
            int w = r - l;
            maxA = max(maxA, h * w);
            if(heights[l]<heights[r]) {
                l++;
            }
            else r--;
        }
        return maxA;
    }
};
