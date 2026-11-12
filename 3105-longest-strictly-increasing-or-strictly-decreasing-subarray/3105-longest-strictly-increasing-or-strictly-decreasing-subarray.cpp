class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int inc = 1;
        int dec = 1;
        int maxinc = 1;
        int maxdec = 1;
        for(int i = 1 ; i < n ; i++){
            if(nums[i-1] < nums[i]){
                inc++;
                maxinc = max(maxinc,inc);
            }else{
                inc = 1;
            }
            if(nums[i-1] > nums[i]){
                dec++;
                maxdec = max(maxdec,dec);
            }else{
                dec = 1;
            }
        }
        return max(maxinc,maxdec);
    }
};