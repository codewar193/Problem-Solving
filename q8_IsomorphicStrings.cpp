


/*
class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        unordered_map<char, vector<int>> m;
        for(int i=0;i<t.size();++i)
            m[t[i]].push_back(i);       //Push index of each character in t in ASC order
        
        int low = -1;   //Index to be found must be greater than low index
        for(int i=0;s[i]!='\0';++i)
        {
            int pos = upper_bound(m[s[i]].begin(),m[s[i]].end(),low)-m[s[i]].begin();
            if(pos==m[s[i]].size())
                return false;
            low = m[s[i]][pos];
        }
        return true;
    }
};
*/