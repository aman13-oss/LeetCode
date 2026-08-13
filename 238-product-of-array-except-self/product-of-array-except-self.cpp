class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>fix(n);
        fix[0]=1;
        for(int i=1;i<n;++i){
            fix[i]=fix[i-1]*nums[i-1];
        }
        int nul=1;
        for(int i=n-2;i>=0;--i){
            nul *= nums[i+1];
            fix[i] *=nul;
        }
        return fix;
    }
};