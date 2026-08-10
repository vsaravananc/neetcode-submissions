
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        map<int,int> mind = {};

        for(int i = 0 ; i < nums.size() ; i++ ){

            int difference = target - nums[i];

            if(mind.find(difference) != mind.end() ){
                return {mind[difference], i};
            }else{
                mind[nums[i]] = i;
            }

        }

        return {};

    }

};
