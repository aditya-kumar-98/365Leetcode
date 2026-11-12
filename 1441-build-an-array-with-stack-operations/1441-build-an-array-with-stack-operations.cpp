class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int num = 1;
        int i = 0;

        while(i < target.size()){//1 2 3
            if(target[i] == num){//1 3
                ans.push_back("Push");
                i++;
                num++;
            }else{
                ans.push_back("Push");
                ans.push_back("Pop");
                num++;
            }
            
        }
        return ans;
    }
};