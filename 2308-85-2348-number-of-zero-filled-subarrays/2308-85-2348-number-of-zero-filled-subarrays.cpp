class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count=0,ans=0;
        for(int i=0; i<nums.size(); i++)
        {
            int x=nums[i];
            if(x==0)
            {
                count++;
                ans+=count;
            }
            else
            {
                count=0;
            }
        }
        return ans;
    }
};