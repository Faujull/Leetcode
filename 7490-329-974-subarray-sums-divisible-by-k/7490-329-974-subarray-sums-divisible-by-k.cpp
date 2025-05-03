class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        m[0] = 1;  // Initial prefix sum 0 with count 1
        int sum = 0, count = 0;

        for (int num : nums) {
            sum += num;
            int rem = sum % k;
            if (rem < 0) rem += k;  // to handle negative remainders

            if (m.find(rem) != m.end()) {
                count += m[rem];
            }

            m[rem]++;
        }

        return count;
    }
};