class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> remember = {};
        int index = 0;
        while (index < nums.size()){
            if(remember.find(nums[index]) != remember.end()){
                return true;
            }
            remember.insert(nums[index]);
            index++;
        }
        return false;
    }
};