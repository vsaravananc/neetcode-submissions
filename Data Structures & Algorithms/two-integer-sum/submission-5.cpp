#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> smaller = {};

        for(int i = 0 ; i < nums.size() ; i++ ){

            int difference = target - nums[i];
            auto it = find(nums.begin() + 1 + i, nums.end(), difference);


            if( it != nums.end()){

                int z = it - nums.begin();

                smaller.push_back(i);
                smaller.push_back(z);
                return smaller;

            }
        }

        return smaller;

    }

};
