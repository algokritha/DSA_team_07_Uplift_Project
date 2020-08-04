/* Problem Link => https://leetcode.com/problems/find-the-duplicate-number/ */

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int prev = -1;
        int m;
        for(auto x: nums){
            if(x == prev){
                m = prev;
                break;
            }
            prev = x;
        }
        return m;
    }
};
