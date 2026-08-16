class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int best=values[0];
        int ans=0;
        for(int j=1;j<values.size();j++){
            int score=best+values[j]-j;
            if(score>ans){
                ans=score;
            }
            int current=values[j]+j;
            if(current>best){
                best=current;
            }
        }
        return ans;
    }
};
