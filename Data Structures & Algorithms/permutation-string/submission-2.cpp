
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.length() < s1.length()) return false;
        int l , r;
        l = r = 0;
        unordered_map<char, int> window , og; window = og = {};
        for(auto c : s1){
            og[c] = og[c] + 1;
        }
         while(r < s2.length()){
            if (r > s1.length() - 1){
               auto z = window[s2[l]];
               if(z > 1){
                   window[s2[l]] = window[s2[l]] - 1;
               }else{
                   window.erase(s2[l]);
               }
               l++;
            }
            window[s2[r]] = window[s2[r]] + 1;
            if(window == og) return true;
            r++;
        }
        return false;
    }
};