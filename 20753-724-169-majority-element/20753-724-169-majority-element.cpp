class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int value = 1, x = nums[0];
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                count++;
            } else {
                if (value < count) {
                    value = count;
                    x = nums[i];
                }
                count = 1;
            }
        }
                if (count > value) {
            x = nums[nums.size() - 1];
        }

        return x;
    }
};