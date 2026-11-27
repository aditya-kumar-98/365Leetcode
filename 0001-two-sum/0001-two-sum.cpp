class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for(int i = 0 ; i < nums.size() ; i++){
            int t = target - nums[i];
            if(seen.find(t) != seen.end()){
                return {seen[t],i};
            }
            seen[nums[i]] = i;
        }
        return {};
    }
};