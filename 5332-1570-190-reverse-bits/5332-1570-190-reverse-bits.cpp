class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int ans=0;
        for(int i=0; i<32; i++)
        {
            int x= n & 1;//for knowing right bit 1 or 0
            int y=x << (31-i); //left shift kore reverse
            ans=ans|y; // OR operation.
            n = n >> 1; // n right shift
        }  
        return ans;  
    }
};