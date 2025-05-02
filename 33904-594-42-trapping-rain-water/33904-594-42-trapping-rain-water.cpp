class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        int lb = height[0];
        int rb = height[n-1];
        long long ans = 0;
        while(l<=r)
        {
            if(lb<rb)
            {
                if(height[l]>lb)
                lb=height[l];
                else
                {
                ans+=lb-height[l];
                l++;
                }
            }
            else
            {
                if(height[r]>rb)
                rb=height[r];
                else
                {
                ans+=rb-height[r];
                r--;
                }
            }
        }
        return ans;
    }
};