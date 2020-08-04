/* Proble Link => https://leetcode.com/problems/maximum-subarray/ */

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int len = nums.size();
        int local_maxi = 0;
        int global_maxi = INT_MIN;
        
        for(int i=0; i<len; i++){
            local_maxi = max(nums[i], nums[i] + local_maxi);
            if(local_maxi > global_maxi){
                global_maxi = local_maxi;
            }
        }
        return global_maxi;
    }
};
