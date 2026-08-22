class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_consecutive , temp , i;
        max_consecutive = 0;
        temp = 0;
        i = 0;
        while ( i < (nums.size() + 1)){
            if(i == nums.size()){
                max_consecutive = max(max_consecutive,temp);
            }
            else if(nums[i] == 0){
                max_consecutive = max(max_consecutive,temp);
                temp = 0;
            }else{
                temp +=1;
            }
            i++;
        }
       
        return max_consecutive;
    }
};