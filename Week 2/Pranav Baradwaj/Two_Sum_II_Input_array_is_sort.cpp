/* Given an array of integers that is already sorted in ascending order, find two numbers such that they add up to a specific target number.

The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. */


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
int s_pointer = 0, e_pointer = numbers.size() - 1;
        while (s_pointer <= e_pointer)
        {
            int result = numbers[s_pointer] + numbers[e_pointer];
            
            if (result == target)
                return {s_pointer + 1, e_pointer + 1};
            else if (result > target)
                e_pointer--;
            else
                s_pointer++;
        }
        return {-1, -1};
    }
};