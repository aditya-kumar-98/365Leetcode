class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>freq;
        if(s.size() != t.size()){
            return false;
        }
        for(char i : s){
            freq[i]++;
        }
        for(char c : t){
            freq[c]--;
        }
        for(auto it : freq){
            if(it.second != 0){
                return false;
            }
        }
        return true;
    }
};