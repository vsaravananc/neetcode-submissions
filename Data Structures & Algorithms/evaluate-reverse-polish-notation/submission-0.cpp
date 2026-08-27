class Solution {
private:
vector<string> operators ={"+","-","*","/"};
vector<int> stackValue;
int eval(int l , int r , string op){
    if( op == "+"){
        return l + r;
    }else if( op == "-"){
        return l - r;
    }else if( op == "*"){
        return l * r;
    }else{
        auto d = l / r;
        return lround(d);
    }
}
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> stack;
        int i = 0;
        while(i < tokens.size()){
            string value = tokens[i];
            auto isOperator = find(operators.begin(),operators.end(),value);
            if(isOperator != operators.end()){
                int right = stackValue.back();
                stackValue.pop_back();
                int left = stackValue.back();
                stackValue.pop_back();
                int out = eval(left,right,value);
                stackValue.push_back(out);
            }else{
                int i = stoi(value);
                stackValue.push_back(i);
            }
            i++;
        }
         return stackValue[0];
    }
};
