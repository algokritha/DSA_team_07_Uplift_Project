/* Problem Link => https://leetcode.com/problems/merge-sorted-array/  */

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n != 0){
        for(int i=0; i<n; i++){
            nums1.pop_back();
        }
        
            auto p = nums1.begin();
            auto q = nums2.begin();

            for(auto x: nums2){
                nums1.push_back(x);
            }

            sort(nums1.begin(), nums1.end());
        }
    }
};
