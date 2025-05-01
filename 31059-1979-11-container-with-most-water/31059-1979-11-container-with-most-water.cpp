class Solution {
public:
    int maxArea(vector<int>& height) {
        int m=0;
        int n=height.size()-1;
        int a;
        int maxa;
        while(m<n)
        {
            a=min(height[m],height[n])*(n-m);
            if(a>maxa)
            {
                maxa=a;
            }
            if(min(height[m],height[n])==height[m])
            {
                m++;
            }
            else
            {
                n--;
            }
        }
        return maxa;
    }
};