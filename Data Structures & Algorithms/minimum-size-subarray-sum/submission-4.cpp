class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        vector<int> sub;
        int left , right , minL , total;
        left = right = minL = total = 0;
        while ( right <= nums.size()){
            while(total >= target && !sub.empty() ){
                if(minL == 0) minL = sub.size();
                minL = minL < sub.size() ? minL : sub.size();
                sub.erase(sub.begin() + 0);
                total -= nums[left];
                left++;
            }
            if(right == nums.size()) break;
            total += nums[right];
            sub.push_back(nums[right]);
            right++;
        }
        return minL;
    }
};