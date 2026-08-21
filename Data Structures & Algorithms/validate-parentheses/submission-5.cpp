class Solution {
private:
    unordered_map<char,char> brackets = {
        {'(',')'},
        {'{','}'},
        {'[',']'}
    };
public:
    bool isValid(string s) {
        int is_valid = s.length();
        if((is_valid % 2) == 1) return false;
        
        vector<char> openbracket;

        int i = 0;
        while(i < is_valid){
            char z = s[i];
            cout << z<< endl;
            if(!brackets[z]){
                if(openbracket.size() == 0) return false;
                char q = openbracket.back();
                char ope = brackets[q];
                openbracket.pop_back();
                if(z != ope) return false;
            }else{
                openbracket.push_back(z);
            }
            i++;
        }
        
        return (openbracket.size() == 0);
    }
};
