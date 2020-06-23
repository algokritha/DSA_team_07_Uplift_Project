/* Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order. */
class Solution {
public:
    int searchInsert(vector<int>& list, int target) {
        return lower_bound(list.begin(),list.end(),target)-list.begin();
    }
};