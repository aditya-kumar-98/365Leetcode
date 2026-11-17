class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int area = 0;
        while(i < j){// j - i - 1
            int h = min(height[i], height[j]);
            int l = j - i;
            area = max(area,l*h);
            if(height[i] < height[j]){
                i++;
            }else{
                j--;
            }
        }
        return area;
    }
};