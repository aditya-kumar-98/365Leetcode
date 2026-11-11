class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        set<vector<int>> ans;

        for(int i = 0 ; i < n - 3 ; i++){
            for(int j = i + 1 ; j < n - 2 ; j++){
                int left = j + 1;
                int right = n - 1;
                while(left < right){
                    long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];
                    if(sum < target){
                        left++;
                    }else if(sum > target){
                        right--;
                    }else{
                        ans.insert({nums[i],nums[j],nums[left],nums[right]});
                        left++;
                        right--;
                    }
                }
            }
        }
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};