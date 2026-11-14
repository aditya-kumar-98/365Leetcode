class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i = 0;
        int j = k-1;
        double sum = accumulate(nums.begin(), nums.begin()+k, 0.0);
        double maxSum = sum;
        while(j < nums.size()-1){
            sum = sum - nums[i] + nums[j+1];
            maxSum = max(maxSum,sum);
            i++;
            j++;
        }
        return maxSum/k;
    }
};