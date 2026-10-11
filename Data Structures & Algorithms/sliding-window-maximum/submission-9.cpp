class Solution {
public:
  vector<int> maxSlidingWindow(vector<int> &nums, int k) {
     vector<int> maxWindow;
     priority_queue<vector<int>> pq;
     int l,r ; l = r = 0;
     while ( r < nums.size()){
         int currentNumber = nums[r];
         pq.push({currentNumber,r});
         if(pq.size() >= k){
             while(!(l <=pq.top()[1] && pq.top()[1] <= r)){
                 pq.pop();
             }
             int top = pq.top()[0];
             maxWindow.push_back(top);
             l++;
         }
         r++;
     }
     return maxWindow;
  }
};