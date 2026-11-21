class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> ans1;
        set<int> ans2;

        for(auto i : nums1){
            if(find(nums2.begin(), nums2.end(), i) == nums2.end()){
                ans1.insert(i);
            }
        }
        for(auto j : nums2){
            if(find(nums1.begin(), nums1.end(), j) == nums1.end()){
                ans2.insert(j);
            }
        }
        vector<vector<int>> result = {vector<int>(ans1.begin(), ans1.end()), vector<int>(ans2.begin(), ans2.end())};
        return result;
    }
};