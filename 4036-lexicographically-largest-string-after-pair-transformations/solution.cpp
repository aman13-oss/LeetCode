class Solution {
public:
    vector<string> largestString(vector<int>& nums) {
        vector<string>ans;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            string s="";
            for(int j=25;j>=0;j--){
                int x=1<<j;
                while(n>= x){
                    s=s+char('a'+j);
                    n=n-x;
                }
            }
            ans.push_back(s);
        }
        return ans;
    }
};