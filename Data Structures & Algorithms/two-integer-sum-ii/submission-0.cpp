class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> indexs (2,0);
        int left = 0;
        int right = numbers.size() - 1;
        while (left < right){
            int sum = numbers[left] + numbers[right];
            if( sum > target){
                right --;
            }else if( sum < target){
                left ++;
            }else{
                indexs[0] = left + 1;
                indexs[1] = right + 1;
                break;
            }
        }
        return indexs;
    }
};
