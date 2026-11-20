class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xr = 0;
        bool flag = false;
        for(int x : nums){
            xr ^= x;
            if(x > 0){
                flag = true;
            }
        }
        if(xr != 0){
            return nums.size();
        }
        return flag?nums.size()-1:0;
    }
};