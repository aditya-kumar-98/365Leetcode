class Solution {
public:
    bool canAliceWin(int n) {
        int stones = 10;
        int moves = 0;
        if(n < 10){
            return false;
        }
        while(n >= stones){
            n -= stones;
            moves++;
            stones--;
        }
        return moves%2 != 0;
    }
};