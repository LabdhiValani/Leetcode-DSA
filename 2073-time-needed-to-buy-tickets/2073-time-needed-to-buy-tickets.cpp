class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
     queue<int> q;   
     int n=tickets.size();
     int time=0;
     for(int i=0;i<n;i++){
        q.push(i);
     }
     while(!q.empty()){
        int person=q.front();
        tickets[person]--;
        time++;
        q.pop();
        if(tickets[person]>0){
            q.push(person);
        }
        if(person==k && tickets[person]==0){
            return time;
        }
     }
     return time;
    }
};