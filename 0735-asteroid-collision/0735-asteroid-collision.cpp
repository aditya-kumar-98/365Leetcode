class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        vector<int> ans;

        for (auto i : asteroids) {
            bool alive = true;
            while (!st.empty() and st.top() > 0 and i < 0) {
                if (st.top() < abs(i)) {
                    st.pop();
                } else if (st.top() == abs(i)) {
                    st.pop();
                    alive = false;
                    break;
                } else if (st.top() > abs(i)) {
                    alive = false;
                    break;
                }
            }
            if (alive) {
                st.push(i);
            }
        }
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};