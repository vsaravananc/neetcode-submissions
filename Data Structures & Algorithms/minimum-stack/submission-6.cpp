
class MinStack {
private:
    vector<int> minStack;
    vector<int> actualStack;
    int minValue;
    int i = -1;

public:
    MinStack() {
    }
    
    void push(int val) {
        i++;
        actualStack.push_back(val);
        if(minStack.empty()){
            minValue = val;
            minStack.push_back(val);
        }else{
            minValue = min(minValue,val);
            minStack.push_back(minValue);
        }
    }
    
    void pop() {
        actualStack.pop_back();
        i--;
        if(i >= 0){
            minValue = minStack[i];
        }
        minStack.pop_back();
        
    }
    
    int top() {
        return actualStack[i];
    }
    
    int getMin() {
        return minStack[i];
    }
};