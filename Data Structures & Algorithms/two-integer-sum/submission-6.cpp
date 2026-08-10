
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        map<int,int> mind = {};

        for(int i = 0 ; i < nums.size() ; i++ ){

            int difference = target - nums[i];

            if(mind.count(difference) > 0){
                return {mind[difference], i};
            }else{
                mind[nums[i]] = i;
            }

        }

        return {};

    }

};
