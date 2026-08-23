class Solution {
public:

    string encode(vector<string>& strs) {
        string encod;
        for(string s : strs){
            encod += to_string(s.length())+"#"+s;
        }
        return encod;
    }

    vector<string> decode(string s) {
       vector<string> decod;
       int i = 0;
       string number;
       while( i < s.length()){
        if(s[i] != '#'){
            number += s[i];
            i++;
        }else{
            int actualNumber = stoi(number);
            string actuallString = s.substr(i+1,actualNumber);
            decod.push_back(actuallString);
            number="";
            i += actualNumber +1;
        }
       }
       return decod;
    }
};
