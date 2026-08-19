class NumArray {
    private:
        vector<int> output;
public:
    NumArray(vector<int>& nums) {
        int m = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            m += nums[i];
            output.push_back(m);
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0){
            return output[right];
        }else{
            int l = left - 1;
            return output[right] - output[l];
        }
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */

 // -2 , -2 , 1 ,-4 , -2 , -3
 // 2,5 ->