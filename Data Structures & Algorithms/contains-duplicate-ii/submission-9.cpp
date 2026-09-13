class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, vector<int>> m;
        for(int i = 0 ; i < nums.size() ; i++){
            if(m[nums[i]].empty()){
                m[nums[i]] = {i};
            }else{
                m[nums[i]].push_back(i);
            }
        }
        for(auto a : m){
            if(a.second.size() < 2) continue;
            int l , r;
            l = 0, r = 1;
            while (r < a.second.size()){
                int q = abs(a.second[r] - a.second[l]);
                if(q <= k) return true;
                l++, r++;
            }
        }
        return false;
    }
};