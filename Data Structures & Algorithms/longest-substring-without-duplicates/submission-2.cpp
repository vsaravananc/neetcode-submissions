class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       if(s.empty()) return 0;
       set<char> m;
       int l , r ,maxC;
       l = r = maxC = 0;
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