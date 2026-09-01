class Solution {
   public:
    bool isPalindrome(string s) {
        int leftPointer = 0;
        int rightPointer = s.length() - 1;
        while( leftPointer < rightPointer){
            char leftWord = s[leftPointer];
            char rightWord = s[rightPointer];
            if(leftWord == ' ' || !isalnum(leftWord)){
                leftPointer ++;
                continue;
            }
            if(rightWord == ' ' || !isalnum(rightWord)){
                rightPointer --;
                continue;
            }
            if(tolower(leftWord) != tolower(rightWord)){
                cout << "LeftWord : " << leftWord << endl; 
                cout << "RightWord : " << rightWord << endl; 
                return 0;
            }
            leftPointer++;
            rightPointer--;
        }
        return 1;
    }
};