class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans(2*n,0);
        int i = 0;
        int j = 0;
        while(i < 2*n){
            ans[i] = nums[j];
            i+=2;
            j++;
        }
        i = 1;
        j = n;
        while(i < 2*n){
            ans[i] = nums[j];
            j++;
            i+=2;
        }
        return ans;
    }
};