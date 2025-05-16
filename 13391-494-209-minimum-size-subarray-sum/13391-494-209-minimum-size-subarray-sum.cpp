class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minwindow = INT_MAX;
        int csum=0;
        int low = 0;
        int high = 0;
        while(high<nums.size())
        {
            csum += nums[high];
            high++;
            while(csum>=target)
            {
                int x=high-low;
                minwindow=min(minwindow,x);
                csum -= nums[low];
                low++;
            }
        }
        if(minwindow==INT_MAX)
        {
            return 0;
        }
        else
        {
            return minwindow;
        }
    }
};