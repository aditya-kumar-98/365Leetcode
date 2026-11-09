class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int> freq;
        int ans = 0;
        if(word.size() <= 8){
            return word.size();
        }
        for(char c : word){
            freq[c]++;
        }
        vector<int>cnt;
        for(auto &it : freq){
            cnt.push_back(it.second);
        }
        sort(cnt.begin(), cnt.end(),greater<int>());
        for(int i = 0 ; i < cnt.size() ; i++){
            ans += cnt[i]*((i/8)+1);
        }
        return ans;
    }
};