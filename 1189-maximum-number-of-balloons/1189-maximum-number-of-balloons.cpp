class Solution {
public:
    int maxNumberOfBalloons(string text) {
       int count[26]={0};
       for(int i=0;i<text.size();i++){
        count[text[i]-'a']++;
       }
       int b=count['b'-'a'];
       int a=count['a'-'a'];
       int l=count['l'-'a']/2;
       int o=count['o'-'a']/2;
       int n=count['n'-'a'];
       int ans=b;
        if(a<ans){
            ans=a;
        }
        if(l<ans){
            ans=l;
        }
        if(o<ans){
            ans=o;
        }
          if(n<ans){
            ans=n;
        }
        return ans;
    }
};