class Solution {
public:
    bool isAnagram(string s, string t) {
        priority_queue<char> stacks;
        priority_queue<char> stackt;
        if(s.size() != t.size()){
            return false;
        }
        for(char c : s){
            stacks.push(c);
        }
        for(char cc : t){
            stackt.push(cc);
        }

        for(int i = 0 ; i < s.size() ; i++){
            char spop = stacks.top();
            stacks.pop();
            char tpop = stackt.top();
            stackt.pop();
            if(spop != tpop){
                return false;
            }
        }
        return true;
    }
};