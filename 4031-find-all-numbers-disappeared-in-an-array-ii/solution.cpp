class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        set<int> s(nums.begin(), nums.end());
        vector<vector<int>> ans;

        int start = -1;

        for (int i = lower; i <= upper; i++) {
            if (!s.count(i)) {
                if (start == -1)
                    start = i;
            }
            else {
                if (start != -1) {
                    ans.push_back({start, i - 1});
                    start = -1;
                }
            }
        }

        if (start != -1)
            ans.push_back({start, upper});

        return ans;
    }
};