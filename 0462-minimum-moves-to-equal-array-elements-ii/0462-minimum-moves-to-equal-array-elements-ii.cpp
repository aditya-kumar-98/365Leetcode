class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        sort(nums.begin(), nums.end());
        int mid = nums[n/2];
        for(auto i : nums){
            ans += abs(i-mid);
        }
        return ans;
    }
};