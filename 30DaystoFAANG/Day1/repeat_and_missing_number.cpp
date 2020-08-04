/* Problem link => https://leetcode.com/problems/missing-number/ */

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        int sum = (len*(len+1))/2;
        int total = 0;
        for(int i =0; i<len; i++){
            total += nums[i];
        }
        return sum-total;
    }
};
