class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ps,nv;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                ps.push_back(nums[i]);
            }else{
                nv.push_back(nums[i]);
            }
        }
        for(int i=0;i<n/2;i++){
            nums[2*i]=ps[i];
            nums[2*i+1]=nv[i];
        }
        return nums;
    }
};