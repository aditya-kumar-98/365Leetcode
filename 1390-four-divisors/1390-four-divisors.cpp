class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
            int num = sqrt(nums[i]);
            for(int j = 1 ; j <= num ; j++){
                if(nums[i]%j == 0){
                    ans.push_back(j);
                    if(nums[i]/j != j){
                        ans.push_back(nums[i]/j);
                    }
                }
            }
            if(ans.size() == 4){
                cnt += accumulate(ans.begin(), ans.end(),0);
            }
            ans.clear();
        }
        return cnt;
    }
};