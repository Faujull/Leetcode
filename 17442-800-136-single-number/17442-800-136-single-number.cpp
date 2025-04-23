class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
      for(int i=0; i<n; i++)
      {
        bool x=true;
        for(int j=0; j<n; j++)
        {
            if(i!=j && nums[i]==nums[j])
            {
                x=false;
                break;
            }
        }
          if(x==true)
          {
            return nums[i];
          }
      }
     return -1;
    }
};