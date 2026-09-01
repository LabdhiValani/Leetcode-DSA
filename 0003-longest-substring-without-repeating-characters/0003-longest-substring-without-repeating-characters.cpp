class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int l=0;
       int ans=0;
        int count[128]={0};
        for(int right=0;right<s.size();right++){
            count[s[right]]++;
            while(count[s[right]]>1){
                count[s[l]]--;
                l++;
            }
            int length=right-l+1;
            if(length>ans){
                ans=length;
            }
        }
        return ans;
    }
};