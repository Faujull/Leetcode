class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int csum=0;
        for(int i=0; i<k; i++)
        {
            csum+=nums[i];
        }
        int maxsum=csum;
        for(int i=k; i<nums.size(); i++)
        {
            csum=csum-nums[i-k]+nums[i];
            maxsum=max(maxsum,csum);
        }
        return (double)maxsum/k;
    }
};