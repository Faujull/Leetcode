class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string w,r="";
        while(ss>>w)
        {
            r=w+" "+r;
        }
        if (!r.empty())
        {
            r.pop_back();
        }
        return r;
    }
};