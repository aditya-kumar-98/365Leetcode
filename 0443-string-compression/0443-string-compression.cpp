class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int write = 0;
        int i = 0;
    
        while(i < n){
            int cnt = 0;
            char comp = chars[i];
            while(i < n and comp == chars[i]){
                i++;
                cnt++;
            }
            chars[write++] = comp;
            if(cnt > 1){
                string num = to_string(cnt);
                for(char c : num){
                    chars[write++] = c;
                }
            }
        }
        return write;
    }
};