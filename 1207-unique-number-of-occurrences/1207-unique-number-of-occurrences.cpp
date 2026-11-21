class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        for(auto i : arr){
            freq[i]++;
        }

        unordered_set<int> check;

        for(auto j : freq){
            check.insert(j.second);
        }

        return check.size() == freq.size(); 
    }
};