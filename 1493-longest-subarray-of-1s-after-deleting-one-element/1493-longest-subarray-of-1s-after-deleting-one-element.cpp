class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int n = nums.size();
        int k = 1;
        int maxLen = 0;

        while(j < n){
            if(nums[j] == 0){
                k--;
            }
            while(k < 0){
                if(nums[i] == 0){
                    k++;
                }
                i++;
            }
            maxLen = max(maxLen, j - i);
            j++;
        }
        return maxLen;
    }
};