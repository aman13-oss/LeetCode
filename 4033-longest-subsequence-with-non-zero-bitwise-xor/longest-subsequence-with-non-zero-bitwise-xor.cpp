class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int x = 0;
        bool zero = true;
        for (int i = 0; i < n; i++) {
            x ^= nums[i];
            if (nums[i] != 0) {
                zero = false;
            }
        }
        if (zero == true)
            return 0;
        else if (x == 0) {
            return n - 1;
        } else {
            return n;
            }
    }
};