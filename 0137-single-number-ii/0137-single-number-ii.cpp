class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> st;
        long long sumAll = 0;
        long long sumUnq = 0;

        for (int x : nums) {
            sumAll += x;

            if (st.find(x) == st.end()) {
                st.insert(x);
                sumUnq += x;
            }
        }

        return (3 * sumUnq - sumAll) / 2;
    }
};