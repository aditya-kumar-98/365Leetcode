class Solution {
public:
long long makePalindrome(long long prefix, int len){
    string s = to_string(prefix);
    string rev = s;
    reverse(rev.begin(),rev.end());

    if(len % 2 == 1){
        s+=rev.substr(1);
    }else{
        s+=rev;
    }
    return stoll(s);
}
    string nearestPalindromic(string n) {
        int l = n.size();
        int half = (l+1)/2;
        string prefix = n.substr(0, half);
        long long p = stoll(prefix);
        vector<long long> pal;
        pal.push_back(p - 1);
        pal.push_back(p);
        pal.push_back(p + 1);
        vector<long long> ans;
        for(auto i : pal){
            ans.push_back(makePalindrome(i,l));
        }
        ans.push_back(stoll("1" + string(l - 1,'0')) - 1);
        ans.push_back(stoll("1" + string(l,'0')) + 1);
        long long b = LLONG_MAX;
        long long minDiff = LLONG_MAX;
        long long org = stoll(n);
        for(auto i : ans){
            if(i == org){
                continue;
            }
            long long diff = abs(i - org);
            if(diff < minDiff or (diff == minDiff and i < b)){
                minDiff = diff;
                b = i;
            }
        }
        return to_string(b);
    }
};