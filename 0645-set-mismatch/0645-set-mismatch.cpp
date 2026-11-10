class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int missing = 0;
        int repeated = 0;
        vector<int>freq(n+1,0);

        for(auto i : nums){
            freq[i]++;
        }
        for(int i = 0 ; i <= n ; i++){
            if(freq[i] == 2){
                repeated = i;
            }else if(freq[i] == 0){
                missing = i;
            }
        }
        return {repeated,missing};
    }
};