class Solution {
      
    public:
    
        int characterReplacement(string s, int k) {
           int max , l , r ; 
           vector<char> window;
           map<char,int> heap;
           max = l = r = 0;
           
           while(r < s.length()){

               if(heap.count(s[r]) > 0){
                   heap[s[r]] = heap[s[r]]+1;
               }else{
                   heap[s[r]] = 1;
               }
               
               max = max < heap[s[r]] ? heap[s[r]] : max;
               window.push_back(s[r]);
               
               while((window.size() - max) > k){
                   char c = window[0];
                   window.erase(window.begin());
                   heap[c] = heap[c] - 1;
                   l++;
               }
               r++;
           }

           return window.size() ;
        }
        
};