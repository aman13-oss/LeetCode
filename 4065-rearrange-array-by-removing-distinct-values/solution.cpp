class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int, int> count;

        for (int x : nums) {
            count[x]++;
        }
        vector<int> ans;
        int maxFreq = 0;
        for (auto p : count) {
            maxFreq = max(maxFreq, p.second);
        }
        for (int round = 1; round <= maxFreq; round++) {
            for (auto p : count) {

                if (p.second >= round) {
                    ans.push_back(p.first);
                }
            }
        }
        return ans;

    }
};