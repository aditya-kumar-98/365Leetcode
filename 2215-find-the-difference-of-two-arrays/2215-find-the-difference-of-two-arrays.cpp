class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st1(nums1.begin(), nums1.end());
        unordered_set<int> st2(nums2.begin(), nums2.end());

        vector<int> ans1;
        vector<int> ans2;

        for(auto i : st1){
            if(st2.find(i) == st2.end()){
                ans1.push_back(i);
            }
        }
        for(auto j : st2){
            if(st1.find(j) == st1.end()){
                ans2.push_back(j);
            }
        }
        return {ans1, ans2};
    }
};