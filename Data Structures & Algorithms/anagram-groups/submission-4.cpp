#include <algorithm>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        map<map<char,int>,vector<int>> hashMap = {};

        vector<vector<string>> output = {};


        for(int i = 0 ; i < strs.size() ; i++){

            map<char,int> s = du(strs[i]);

            auto it = hashMap.find(s);

            if(it != hashMap.end()){
                hashMap[s].push_back(i);
            }else{
                hashMap[s] = {i};
            }
            
        }

        for(auto c : hashMap){
           vector<string> a = {};
           for(int i = 0 ; i < c.second.size(); i++){
                 a.push_back(strs[c.second[i]]);
           }
           output.push_back(a);
        }

        return output;
        
    }

      map<char,int> du(string cz) {
            map<char,int> uu = {};
            for(int i = 0 ; i < cz.length() ; i++){
                char s = cz[i];
            auto it = uu.find(s);

            if(it != uu.end()){
                uu[s] =  uu[s] + 1;
            }else{
                uu[s] = 1;
            }
            }
            return uu;
        };
};
