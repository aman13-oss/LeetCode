class Solution {
public:
    int maxArea(vector<int>& arr) {
        int left=0;
        int right=arr.size()-1;
        int maxWater=0;
        while(left<right){
            int width= right-left;
            int height=min(arr[left],arr[right]);
            int water=width * height;

            maxWater=max(maxWater,water);

            if(arr[left]<arr[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxWater;
    }
};