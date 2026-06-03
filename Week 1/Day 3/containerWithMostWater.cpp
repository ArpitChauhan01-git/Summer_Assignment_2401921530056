class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int n = height.size();
        for(int i=0, j=n-1; i<j; ){
            int length = min(height[i], height[j]);
            maxWater = max(maxWater, length*(j-i));
            if(height[i] < height[j]) i++;
            else j--;
        }
        return maxWater;
    }
};