class Solution {
public:
    int rev(int n){
        long long ans = 0;
        while(n != 0){
            int rem = n%10;
            ans = ans*10 +rem;
            n /= 10;
        }
        if(ans > INT_MAX || ans < INT_MIN){
            return 0;
        }
        return ans;
    }
    int reverse(int x) {
        int num = x;
        return rev(num);
    }
};