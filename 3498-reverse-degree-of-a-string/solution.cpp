class Solution {
public:
    int reverseDegree(string s) {
        int sum=0, n=s.size();
        for(int i=0; i<n; i++){
             sum+=(i+1)*('z'-s[i]+1);
        }
        return sum;
    }
};