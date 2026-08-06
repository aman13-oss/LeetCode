class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int xr=0;
        for(int i=0;i<n;i++){
            xr=xr^nums[i];
        }
        return xr;
    }
};