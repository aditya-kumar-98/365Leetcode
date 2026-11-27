class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(auto i : strs){
            int freq[26] = {0};
            for(char c : i){
                freq[c - 'a']++;
            }
            string key = "";
            for(int k = 0 ; k < 26 ; k++){
                key += to_string(freq[k]) + "#";
            }
            mp[key].push_back(i);
        }
        vector<vector<string>> ans;
        for(auto i : mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};