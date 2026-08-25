class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
      unordered_set<int> s;
      for(int i=0;i<nums.size();i++){
        s.insert(nums[i]);
      }  
      int multiple=k;
      while(true){
        if(s.find(multiple)==s.end()){
            return multiple;
        }
        multiple=multiple+k;
      }
    }
};