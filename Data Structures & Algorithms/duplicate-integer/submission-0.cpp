class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int index = 0;
        while (index < nums.size()){
            int search = index + 1;
            while (search < nums.size()){
                if(nums[index] == nums[search]){
                    return true;
                }
                search++;
            }
            index++;
        }
        return false;
    }
};