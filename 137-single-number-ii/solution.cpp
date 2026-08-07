class Solution {
public:
    int singleNumber(vector<int>& nums) {
     
     int ans=0;
     for(int i=0;i<32;i++){
        int count=0;
        for(int num:nums){
            if(num & (1<<i))
            count++;
        }
        if(count % 3 !=0){
            ans |= (1<<i);
        }
     }
     return ans;
    }
};