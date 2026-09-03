class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       set<vector<int>> ans = {};
        sort(nums.begin(),nums.end());
        int i = 0;
        int left , right;
        int n = nums.size();
        while (i < (n - 2)){
            left = i + 1;
            right = n - 1;
            while (left < right){
                int sum = nums[i] + nums[left] + nums[right];
                if(sum < 0){
                    left++;
                }else if(sum == 0){
                    ans.insert({nums[i] , nums[left] , nums[right]});
                    left++;
                    right--;
                }else{
                    right --;
                }
            }
            i++;
        }
        
        return vector<vector<int>>(ans.begin(),ans.end());
    }
};
