class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>x(n+1);
        for(int i=0; i<=n; i++)
        {
            if(i%2==0)
            {
                x[i]=x[i/2];
            }
            else
            {
                x[i]=x[i/2]+1;
            }
        }
        return x;
    }
};