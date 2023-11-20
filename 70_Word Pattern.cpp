class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        vector<string> res;
        string temp ="";
        
        for(int i =0;i<s.length();i++){
            if(s[i] == ' '){
                res.push_back(temp);
                temp = "";
                continue;
            }
            temp+=s[i];
        }
         res.push_back(temp);
      if( res.size() != pattern.length() ) return false;

      unordered_map<char,string> m1;
      unordered_map<string ,char>m2;
      
      for(int i =0;i<pattern.length();i++){
          m1[pattern[i]]=res[i];
          m2[res[i]] = pattern[i];
      }
       
       for(int i =0;i<pattern.length();i++){
           if(m1[pattern[i]] != res[i] || m2[res[i]]!=pattern[i])
           return false;
       }
       return true;
    }
};
