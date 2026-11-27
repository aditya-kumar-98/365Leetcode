class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> num;
        for(auto i : tokens){
            if(i == "+" or i == "-" or i == "/" or i == "*"){
                int b = num.top();
                num.pop();
                int a = num.top();
                num.pop();
                int ans = 0;
                if(i == "+"){
                    ans = a + b;
                }else if(i == "-"){
                    ans = a - b;
                }else if(i == "/"){
                    ans = a / b;
                }else if(i == "*"){
                    ans = a * b;
                }
                num.push(ans);
            }else{
                num.push(stoi(i));
            }
        }
        return num.top();
    }
};