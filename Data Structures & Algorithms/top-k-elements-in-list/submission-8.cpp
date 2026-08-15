class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>> mind ;
        int i = 0;
        int j = 0;
        sort(nums.begin(),nums.end());
        while(j < nums.size()){
            if(nums[i] == nums[j]){
                j++;
            }else{
                int frequency = j - i;
                mind.push_back({frequency,nums[i]});
                i = j;
                j++;
            }
        }
        mind.push_back({j - i, nums[j - 1]});

        vector<int> result = {};
        int t = mind.size() - 1;

        sort(mind.begin(), mind.end());

        while ( result.size() < k ){
            auto r = mind[t];
            cout << "" << r.first  << "" << endl;
            result.push_back(r.second);
            t--;
        }
        return result;
    }
};
