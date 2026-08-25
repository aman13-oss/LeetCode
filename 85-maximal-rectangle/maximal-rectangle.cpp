class Solution {
public:

    int largestRectangleArea(vector<int>heights){
        int n=heights.size();
        vector<int> left(n,0);
        vector<int>right(n,0);
        stack<int>st;
    // right smaller 
        for(int i=n-1;i>=0;i--){
            while( !st.empty() && heights[st.top()]>= heights[i]){
                st.pop();
            }
            if(st.empty()){
                right[i]=n;
            }else{
                right[i]=st.top();
            }
            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }
    // left smaller

        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>= heights[i]){
                st.pop();
            }
            if(st.empty()){
                left[i]=-1;
            }else{
                left[i]=st.top();
            }
            st.push(i);
        }    
            int ans=0;
            for(int i=0;i<n;i++){
                int width= right[i]-left[i]-1;
                int area = width* heights[i];
                ans=max(ans,area);
            }
            return ans;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        vector<int>heights(cols,0);
        int ans=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]=='1'){
                    heights[j]++;
                }else{
                    heights[j]=0;
                }
            }
            ans=max(ans,largestRectangleArea(heights));
        }
        return ans ;
    }
};