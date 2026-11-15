class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowels = {'A','a','E','e','I','i','O','o','U','u'};
        int n = s.size();
        int i = 0;
        int j = n-1;
        while(i < j){
            if(vowels.find(s[i]) == vowels.end()){
                i++;
            }else if(vowels.find(s[j]) == vowels.end()){
                j--;
            }else{
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};