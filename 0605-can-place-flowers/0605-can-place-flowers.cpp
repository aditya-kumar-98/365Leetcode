class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int num = flowerbed.size();
        for(int i = 0 ; i < num ; i++){
            if((flowerbed[i] == 0) and (i == 0 or flowerbed[i-1] == 0) and (i == num - 1 or flowerbed[i+1] == 0)){
                flowerbed[i] = 1;
                n--;
            }
        }
        return n<=0;
    }
};