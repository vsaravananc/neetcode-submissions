class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      vector<int> start;
    unordered_set<int> mind;
    int output , realOut , i;
    output = 1;
    realOut = i = 0;

    for(int i = 0; i < nums.size() ; i++){
        mind.insert(nums[i]);
    }

    for(auto i : mind){
        int z = i - 1;
        if(mind.count(z) == 0){
            start.push_back(i);
        }
    }

    while( i < start.size()){
        int u = start[i] + output;
        if(mind.count(u) == 1){
            output++;
        }else{
            realOut = max(realOut,output);
            output = 0;
            i++;
        }
    }
    return realOut;
    }
};
