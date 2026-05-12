class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1, 0);
        for(int i = 0; i < n + 1; i ++) {
            int cur = i;
            while(cur) {
                ans[i] += cur & 1;
                cur = cur >> 1;
            }
        }
        return ans;
    }
};