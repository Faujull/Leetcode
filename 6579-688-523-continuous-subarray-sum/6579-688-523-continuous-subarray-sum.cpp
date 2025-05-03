class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size(),x=0;
        unordered_map<int,int> m;
        m[0]=0;
        for(int i=0; i<n; i++)
        {
            x=(x+nums[i])%k;
            if(m.find(x)!=m.end())
            {
                if(i+1-m[x]>=2)
                {
                    return true;
                }
            }
            else
            {
                m[x]=i+1;
            }
        }
        return false;
    }
};