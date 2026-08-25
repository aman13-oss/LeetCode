class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int g=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            g=__gcd(g,nums[i]);
            if(g==1)return true;
        }
        return g==1;
    }
};