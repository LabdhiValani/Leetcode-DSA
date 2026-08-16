class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // Construct the set directly from the vector (faster than manual insert)
        unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0;

        // Iterate through the unique set rather than nums to avoid duplicate work
        for (int num : s) {
            // Only start counting if 'num' is the beginning of a sequence
            if (s.find(num - 1) == s.end()) {
                int current = num;
                int count = 1;

                while (s.find(current + 1) != s.end()) {
                    current++;
                    count++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};
