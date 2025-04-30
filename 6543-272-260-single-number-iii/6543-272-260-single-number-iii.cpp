class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xor2=0;
        for(int i:nums)
        {
            xor2^=i;
        }
        unsigned int lowestBit = xor2 & (-(unsigned int)xor2);
        vector<int>result(2);
        for(int i:nums)
        {
            if((lowestBit & i)==0)
            {
                result[0]^=i;
            }
            else
            {
                result[1]^=i;
            }
        }
        return result;
    }
};