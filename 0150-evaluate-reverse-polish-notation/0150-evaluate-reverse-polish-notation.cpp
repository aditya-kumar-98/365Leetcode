class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int ans = 0;
        for(auto i : tokens){
            if(i == "+" or i == "-" or i == "/" or i == "*"){
                int num2 = st.top();
                st.pop();
                int num1 = st.top();
                st.pop();
                switch(i[0]){
                    case '+':
                        ans = num1 + num2;
                        break;
                    case '-':
                        ans = num1 - num2;
                        break;
                    case '*':
                        ans = num1 * num2;
                        break;
                    case '/':
                        ans = num1 / num2;
                        break;
                }
                st.push(ans);
            }else{
                int a = stoi(i);
                st.push(a);
            }
        }
        return st.top();
    }
};