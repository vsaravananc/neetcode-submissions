
class Solution {
public:
    int trap(vector<int>& height) {
       int waterTap = 0;
       vector<int> LtoR(height.size());
       vector<int> RtoL(height.size());
       int l,r,i,maxz;
       l = i = maxz = 0;
       r = height.size() - 1;
       while (l < height.size()) {
            maxz = max(maxz,height[l]);
            LtoR[l] = maxz;
            l++;
       }
       maxz = 0;
       while (r >= 0) {
           maxz = max(maxz,height[r]);
           RtoL[r] = maxz;
           r--;
       }
       while(i < height.size()){
           int m = min(LtoR[i],RtoL[i]);
           waterTap += (m - height[i] < 0) ? 0 : (m - height[i]);
           i++;
       }
       return waterTap;
    }
};

