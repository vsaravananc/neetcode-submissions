class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()){
            return false;
        }

        map<char,int> sfrequency , tfrequency;
        sfrequency = tfrequency = {};

        for(int i = 0 ; i < s.length() ; i++){
            if(sfrequency.find(s[i]) != sfrequency.end() ){
                sfrequency[s[i]] = sfrequency[s[i]] + 1;
            }else{
                sfrequency[s[i]] = 1;
            }
        }

        for(int i = 0 ; i < t.length() ; i++){
            if(tfrequency.find(t[i]) != tfrequency.end() ){
                tfrequency[t[i]] = tfrequency[t[i]] + 1;
            }else{
                tfrequency[t[i]] = 1;
            }
        }


        return tfrequency == sfrequency;

        

    }
};
