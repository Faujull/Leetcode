class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>f(26,0);
        int l=0;
        int maxc=0;
        int ans=0;
        for(int i=0; i<s.size(); i++)
        {
            f[s[i]-'A']++;
            maxc=max(maxc,f[s[i]-'A']);
            while((i-l+1)-maxc>k)
            {
            f[s[l]-'A']--;
            l++;
            }
         ans=max(ans,i-l+1);
        }
    return ans;
    }
};