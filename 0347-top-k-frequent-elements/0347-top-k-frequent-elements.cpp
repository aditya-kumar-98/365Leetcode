class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(auto i : nums){
            freq[i]++;
        }
        vector<vector<int>> bucket(nums.size() + 1);
        vector<int> ans;
        for(auto i : freq){
            bucket[i.second].push_back(i.first);
        }
        for(int i = bucket.size() - 1 ; i >= 0 ; i--){
            for(auto j : bucket[i]){
                ans.push_back(j);
            }
            if(ans.size() == k){
                return ans;
            }
        }
        return ans;
    } 
};