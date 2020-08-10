/* Problem Link => https://leetcode.com/problems/trapping-rain-water/ */

class Solution {
public:
    int trap(vector<int>& height) {
        int lh[height.size()];
        int rh[height.size()];
        
        int curMax = 0;
        for(int i=0; i<height.size(); i++){
            lh[i] = max(height[i], curMax);
            curMax = max(height[i], curMax);
        }
        
        curMax = 0;
        for(int i=height.size()-1; i>=0; i--){
            rh[i] = max(height[i], curMax);
            curMax = max(height[i], curMax);
        }
        int totalWater = 0;
        
        for(int i=0; i<height.size(); i++){
            totalWater += min(lh[i], rh[i]) - height[i];
        }
        
        return totalWater;
    }
};
