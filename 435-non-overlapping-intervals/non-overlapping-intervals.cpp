class Solution {
public:
    static bool cmp(const vector<int>&a,const vector<int>&b){
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end(),cmp);
        int count=0;
        int end=arr[0][1];
        for(int i=1;i<arr.size();i++){
            if(arr[i][0] < end){
                count++;
            }
            else{
                end=arr[i][1];
            }
        }
        return count;
    }
};