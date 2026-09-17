class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        int n=source.size();
        int m=target.size();
        long long  sum1=0;
        long long  sum2=0;
        for(int i=0;i<n;i++){
            sum1+=source[i];
        }
        for(int i=0;i<m;i++){
            sum2 += target[i];
        } 
        return sum1==sum2;
    }
};