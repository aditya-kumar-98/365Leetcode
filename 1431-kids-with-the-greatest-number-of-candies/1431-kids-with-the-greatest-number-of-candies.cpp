class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int maxCandies = *max_element(candies.begin(),candies.end());
        for(auto i : candies){
            ans.push_back(i+extraCandies >= maxCandies);
        }
        return ans;
    }
};