/* Problem Link => https://leetcode.com/problems/two-sum/ */

/* Brute Force approach takes a very long time */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>:: iterator itr;
        vector<int>:: iterator itr2;
        for(itr = nums.begin(); itr!=nums.end(); itr++){
            int remainVal = target - *itr;
            itr2 = find(itr+1, nums.end(), remainVal);
            if(itr2 != nums.end()){
                break;
            }
        }
        
        int first = itr - nums.begin();
        int second = itr2 - nums.begin();
        
        return {first, second};
    }
};
