class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> vowels = {'a','e','i','o','u'};
        int maxVowel = 0;
        int i = 0;
        int j = k;
        int cnt = 0;
        for(int m = 0 ; m < k ; m++){
            if(vowels.find(s[m]) != vowels.end()){
                cnt++;
            }
        }

        int maxcnt = cnt;

        while(j < s.size()){
            if(vowels.find(s[i]) != vowels.end()){
                cnt--;
            }
            if(vowels.find(s[j]) != vowels.end()){
                cnt++;
            }
            maxcnt = max(maxcnt,cnt);
            i++;
            j++;
        }
        return maxcnt;
    }
};