/* Problem Link => https://leetcode.com/problems/max-consecutive-ones/ */


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        bool continuous = false;
        int maxi = 0;
        int globalmax = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1 && continuous == false){
                maxi++;
                continuous = true;
            }else if(nums[i] == 1 && continuous == true){
                maxi++;
            }else{
                globalmax = max(globalmax, maxi);
                maxi = 0;
                continuous = false;
            }
        }
        
        globalmax = max(globalmax, maxi);
        return globalmax;
    }
};
