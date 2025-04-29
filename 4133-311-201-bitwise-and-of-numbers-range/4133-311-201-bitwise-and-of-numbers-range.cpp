class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
       int sr=0;
       while(left!=right)
       {
        left = left >> 1;
        right = right >> 1;
        sr++;
       } 
       return left << sr;
    }
};