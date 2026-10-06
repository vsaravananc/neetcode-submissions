class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l , r , c ;
        r = c = 0;
        l = -1;
         while ( r < nums.size()){
            if(nums[r] == val){
                c++;
            }
            if(nums[r] == val && ( l < 0 || nums[l] != val) ){
                l = r;
            } else if(l>=0 &&nums[l] == val && nums[r] != val){
                int g = nums[r];
                nums[r] = nums[l];
                nums[l] = g;
                l++;
            }
            r++;
        }
        return r - c;
    }
};