class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l = 0, r = n - 1;
        if(n==0) return 0;
        int maxL = height[0], maxR = height[n-1], res = 0;
        
        while(l<r) {
            
            if(maxL<maxR) {
                l++;
                maxL = max(maxL, height[l]);
                res += maxL - height[l];
            }
            else {
                r--;
                maxR = max(maxR, height[r]);
                res += maxR - height[r];
            }
        }

        return res;
    }
};