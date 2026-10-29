class Solution {
public:
    vector<int> cycleLengthQueries(int n, vector<vector<int>>& queries) {
        int m=queries.size();
        vector<int>ans;
        for(int i=0;i<m;i++){
            int a=queries[i][0];
            int b= queries[i][1];

            int count=1;

            while(a !=b){
                if(a>b){
                    a /=2;
                }
                else{
                    b /=2;
                }
                count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};