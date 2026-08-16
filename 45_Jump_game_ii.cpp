class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps=0;
        int far=0;
        int end=0;
        for(int i=0;i<nums.size()-1;i++){
        int a=i+nums[i];
        if(a>far){
            far=a;
        }
        if(i==end){
            jumps++;
            end=far;
        }
        }
        return jumps;
    }
};
