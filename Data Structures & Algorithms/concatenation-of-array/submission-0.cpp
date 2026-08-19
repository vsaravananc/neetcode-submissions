class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size() * 2;
        vector<int> ans(n);
        int i = 0;
        while( i < nums.size()){
            ans[i] = nums[i];
            ans[(nums.size() + i)] = nums[i];
            i++;
        }
        return ans;
    }
};