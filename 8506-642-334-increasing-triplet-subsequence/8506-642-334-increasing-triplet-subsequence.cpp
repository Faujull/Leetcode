class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int x=INT_MAX;
        int y=INT_MAX;
        int z=INT_MAX;
        
        for(int i=0; i<nums.size(); i++)
        {
            int a=nums[i];
            if(a<=x)
            {
                x=a;
            }
            else if(a<=y)
            {
                y=a;
            }
            else if(a<=z)
            {
                z=a;
                return true;
            }
        }
            return false;
    }
};