class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;

        vector<int> x(26, 0), y(26, 0);

        for(int i = 0; i < s1.size(); i++) 
        {
            x[s1[i] - 'a']++;
            y[s2[i] - 'a']++;
        }

        if(x == y) return true;

        for(int i = s1.size(); i < s2.size(); i++) 
        {
            y[s2[i] - 'a']++;                        
            y[s2[i - s1.size()] - 'a']--;           

            if(x == y) return true;
        }

        return false;
    }
};
