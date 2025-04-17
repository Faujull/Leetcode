class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        long long n=nums.size();
        int i=0;
        while(i<n)
        {
            if(nums[i]==0)
            {
               nums.erase(nums.begin()+i);
                nums.push_back(0);
                n--;
            }
            else
            {
                i++;
            }
        }
    }
};