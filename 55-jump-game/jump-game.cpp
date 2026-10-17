class Solution {
public:
    bool canJump(vector<int>& nums) {
       int maxIdx=0;
       for(int i=0;i<nums.size();i++){
        if( i> maxIdx)return false;
        maxIdx=max(maxIdx,i+nums[i]);
       }
       return true;
    }
};