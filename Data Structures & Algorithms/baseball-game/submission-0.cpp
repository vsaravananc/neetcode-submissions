class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> scores;
        int totalScore = 0;
        for(int i = 0 ; i < operations.size() ; i++){
            string c = operations[i];
            if(c == "+"){
                int last , lastbefore;
                last = scores.size() - 1;
                lastbefore = last - 1;
                int l = scores[lastbefore] + scores[last];
                totalScore += l;
                scores.push_back(l);
            }else if(c == "D"){
                int last;
                last = scores.size() - 1;
                int d = scores[last] * 2;
                totalScore += d;
                scores.push_back(d);
            }else if( c == "C"){
                int r = scores.back();
                totalScore -= r;
                scores.pop_back();
            }else{
                int score = stoi(c);
                totalScore += score;
                scores.push_back(score);
            }
        }
   
        return totalScore;
    }
};

// + : previous two scores
// D : previous one * 2
// C : invalide remove the last scroe