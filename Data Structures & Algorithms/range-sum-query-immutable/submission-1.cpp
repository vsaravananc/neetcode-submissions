class NumArray {
    private:
        vector<int> output;
public:
    NumArray(vector<int>& nums) {
        int m = 0;
        for(auto n : nums){
            m += n;
            output.push_back(m);
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0){
            return output[right];
        }
        return output[right] - output[left - 1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */

 // -2 , -2 , 1 ,-4 , -2 , -3
 // 2,5 ->