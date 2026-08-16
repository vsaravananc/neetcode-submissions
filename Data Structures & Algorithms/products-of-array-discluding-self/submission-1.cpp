class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ps(nums.size());
    vector<int> ss(nums.size());
    vector<int> result(nums.size());
    ps[0] = 1;
    ss[nums.size() - 1] = 1;


    for(int i = 1 ; i < nums.size(); i++){
        ps[i] = ps[i-1] * nums[i-1];
    }


    for(int i = nums.size() - 2 ; i > -1; i--){
        ss[i] = ss[i+1] * nums[i+1];
    }

    for(int i = 0 ; i < nums.size(); i++){
        result[i] = ps[i] * ss[i];
    }
        return result;
    }
};
