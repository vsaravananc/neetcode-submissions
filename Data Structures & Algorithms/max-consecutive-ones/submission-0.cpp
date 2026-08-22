class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_consecutive , temp;
        max_consecutive = 0;
        temp = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 0){
                cout << temp << endl;
                cout << max_consecutive << endl;
                max_consecutive = max(max_consecutive,temp);
                temp = 0;
            }else{
                temp +=1;
            }
        }
        max_consecutive = max(max_consecutive,temp);

        return max_consecutive;
    }
};