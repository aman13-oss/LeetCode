class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {
        map<pair<int, int>, int> mp;

        int ans = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                ans++;
            }
            else {
                int a = nums[i - 1];
                int b = nums[i];
                if (a > b)
                    swap(a, b);
                mp[{a, b}]++;
            }
        }
        int best = 0;
        for (auto p : mp) {
            best = max(best, p.second);
        }
        return ans + best;
    }
};