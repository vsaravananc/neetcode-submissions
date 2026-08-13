#include <algorithm>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string,vector<string>> mind;

        for(const auto s : strs){
            string sorted = s;
            sort(sorted.begin(),sorted.end());
            mind[sorted].push_back(s);
        }

        vector<vector<string>> result;

        for(const auto m : mind){
            result.push_back(m.second);
        }

        return result;
       
        
    }

};
