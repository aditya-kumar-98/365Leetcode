class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long option1 = 1LL * cost1*need1 + 1LL * cost2*need2;
        long long option2 = 1LL * costBoth * max(need1,need2);
        long long i = min(need1,need2);
        long long option3 = 1LL * i * costBoth + 1LL * (need1 - i) * cost1 + 1LL * (need2 - i) * cost2;
        return min({option1, option2, option3}); 
    }
};