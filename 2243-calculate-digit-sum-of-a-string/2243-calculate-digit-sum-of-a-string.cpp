class Solution {
public:
    string digitSum(string s, int k) {
        while (s.size() > k) {
            string temp = "";
            int i = 0;
            while (i < s.size()) {
                int sum = 0;
                for (int l = i; l < i + k and l < s.size(); l++) {
                    sum += s[l] - '0';
                }
                temp += to_string(sum);
                i += k;
            }
            s = temp;
        }
        return s;
    }
};