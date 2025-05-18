class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=nums[0];
        int c=nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            c=max(nums[i],nums[i]+c);
            ans=max(c,ans);
        }
        return ans;
    }
};