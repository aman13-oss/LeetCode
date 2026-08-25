class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n=heights.size();
        stack<int>st;
        vector<int> ans(n,0);
        for(int i=n-1;i>=0;i--){
            while( ! st.empty() && st.top()< heights[i]){
                st.pop();
                ans[i]++;
            }
            if(!st.empty()) ans[i]++;
            st.push(heights[i]);
        }
        return ans;
    }
};