class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty()) return 0;
       unordered_set<char> m;
       int l , r ,maxC;
       l = 0 , r = 0;
       while(r < s.length()){
           if(m.count(s[r])){
               m.erase(s[l]);
               l++;
           }else{
               m.insert(s[r]);
               r++;
           }
           maxC = maxC < m.size() ? m.size() : maxC ;
       }
       return  maxC;
    }
};