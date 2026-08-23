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
        cout << s << endl;
       vector<string> decod;
       int i = 0;
       string number;
       while( i < s.length()){
        if(s[i] != '#'){
            number += s[i];
            i++;
        }else{
            cout << s[i] << endl;
            cout << number << endl;
            int actualNumber = stoi(number);
            string actuallString = s.substr(i+1,actualNumber);
            cout << actuallString << endl;
            decod.push_back(actuallString);
            number="";
            i += actualNumber +1;
            cout << i << endl;
        }
       }

       return decod;
    }
};
