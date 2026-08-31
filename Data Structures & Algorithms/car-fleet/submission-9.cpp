
class Solution{
    private:
        map<int,int,greater<int>> carInfo;
        vector<double> stack;
    public:
        int carFleet(int target, vector<int>& position, vector<int>& speed) {
            for(int i = 0; i < position.size(); i++){
                carInfo[position[i]] = speed[i];
            }
            for(auto c : carInfo){
                double cal = static_cast<double>(target - c.first) / c.second;
              if(!stack.empty() && cal > stack.back()){
                    stack.push_back(cal);
                }
              if(stack.empty()){
                  stack.push_back(cal);
              }
            }
            return stack.size();
        }
};