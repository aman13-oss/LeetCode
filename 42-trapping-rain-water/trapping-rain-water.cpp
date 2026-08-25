class Solution {
public:
    int trap(vector<int>& height) {   
        int n=height.size();
        int l=0,r=n-1;
        int ans=0;
        int lmax=0,rmax=0;
        while(l<r){
            lmax=max(lmax,height[l]);
            rmax=max(rmax,height[r]);

            if(lmax<rmax){
                ans+=lmax-height[l];
                l++;
            }
            else{
                ans+=rmax-height[r];
                r--;
            }
        }
        return ans;
    }
};