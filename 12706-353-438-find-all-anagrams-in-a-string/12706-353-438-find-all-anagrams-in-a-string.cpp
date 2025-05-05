class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(s.size()<p.size())return {};
        vector<int>x(26,0);
        vector<int>y(26,0);
        vector<int>ans;
        for(int i=0;i<p.size();i++)
        {
            x[p[i]-'a']++;
            y[s[i]-'a']++;
        }
       
        if(x==y)ans.push_back(0);
        
        for(int i=p.size();i<s.size();i++)
        {
             y[s[i]-'a']++;
             y[s[i-p.size()]-'a']--;
             if(x==y)ans.push_back(i+1-p.size());
        }
        
        return ans;
    }
};