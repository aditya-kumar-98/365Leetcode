class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int,vector<int>> hp;
        for(int i = 0 ; i < nums.size() ; i++){
            hp[nums[i]].push_back(i);
        }
        vector<int>ans(nums.size());
        int cnt = 0;

        for(auto &i : hp){
            for(auto j : i.second){
                ans[j] = cnt;
            }
            cnt += i.second.size();
        }
        return ans;
    }
};