class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxAltitude = 0;
        int sum = 0;

        for(auto i : gain){
            sum+=i;
            maxAltitude = max(maxAltitude,sum);
        }
        return maxAltitude;
    }
};