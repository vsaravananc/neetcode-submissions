class Solution {
public:
    bool isAnagram(string s, string t) {

        unordered_map<char,int> smap , tmap;

        for(int i = 0 ; i < s.length() ; i++){
            smap[s[i]] = smap[s[i]] + 1;
        }

        for(int i = 0 ; i < t.length() ; i++){
            tmap[t[i]] = tmap[t[i]] + 1;
        }

        return smap == tmap;

    }
};
