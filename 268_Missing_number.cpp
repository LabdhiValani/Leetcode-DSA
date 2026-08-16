class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int expectedsum=(n*(n+1))/2;
        int actualsum=0;
        for(int t=0;t<n;t++){
            actualsum=actualsum+nums[t];
        }
        return expectedsum-actualsum;
    }
};
