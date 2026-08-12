#include <algorithm>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string,vector<int>> hashMap = {};

        vector<vector<string>> output = {};

        for(int i = 0 ; i < strs.size() ; i++){

            string s = strs[i];

            sort(s.begin(), s.end());

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
};
