class Solution {
public:
    int calmax(int n){
        int ans = 0;
        vector<int> a;
        
        while(n > 0){
            int rem = n % 10;
            a.push_back(rem);
            n /= 10;
        }
        sort(a.begin(),a.end(),greater<int>());

        for(auto i : a){
            ans = ans * 10 + i;
        }
        return ans;
    }
    long long maximizeSum(vector<int>& nums, int k) {
        vector<int>  diff;
        vector<int> rearrange;
        long long sum = 0;
        for(auto i : nums){
            sum  += i;
            int maxi = calmax(i);
            diff.push_back(maxi - i);
        }
        sort(diff.begin(), diff.end(), greater<int>());
        for(int j = 0 ; j < k and j < diff.size() ; j++){
            sum += diff[j];
        }
        return sum;
    }
};