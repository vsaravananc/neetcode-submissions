class Solution {
     private:
        vector<int> stack;
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(),0);
            for (int i = 0; i < temperatures.size(); i++) {
                int p = temperatures[i];
                while (!stack.empty()) {
                    int t = stack.back();
                    int s = temperatures[t];
                    if(s < p){
                        int gn = t - i;
                        result[t] = abs(gn);
                        stack.pop_back();
                    }else{
                        stack.push_back(i);
                        break;
                    }
                }
                stack.push_back(i);
            }
            return result;
    }
};
