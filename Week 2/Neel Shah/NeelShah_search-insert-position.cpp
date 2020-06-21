class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        std::vector<int>::iterator upper1;
        upper1 = lower_bound(nums.begin(), nums.end(), target);
        int m = upper1 - nums.begin();
        return m;
    }
};
