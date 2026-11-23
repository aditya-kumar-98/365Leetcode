class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char,int> word1Freq;
        unordered_map<char,int> word2Freq;

        for(auto i : word1){
            word1Freq[i]++;
        }
        for(auto j : word2){
            word2Freq[j]++;
        }
        if(word1Freq.size() != word2Freq.size()){
            return false;
        }
        for(auto i : word1Freq){
            if(word2Freq.find(i.first) == word2Freq.end()){
                return false;
            }
        }
        vector<int> freq1;
        vector<int> freq2;
        for(auto i : word1Freq){
            freq1.push_back(i.second);
        }
        for(auto j : word2Freq){
            freq2.push_back(j.second);
        }
        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());
        return freq1 == freq2;
    }
};