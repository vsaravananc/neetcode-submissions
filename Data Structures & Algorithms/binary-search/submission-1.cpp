class Solution {
public:
    int search(vector<int>& nums, int target) {
        int r = nums.size();
        vector<int> c = nums;
        while(r > 0){
            r = round(c.size()/2);
            if(target > c[r]){
                c.assign(c.begin()+r , c.end());
                
            }else if(c[r] == target){
                auto it = find(nums.begin(),nums.end(),c[r]);
                return it - nums.begin();
            }else{
                c.assign(c.begin() , c.begin()+r);
            }
        }
        return -1;
    }
};