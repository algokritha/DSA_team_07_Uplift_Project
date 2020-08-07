/* Problem Link => https://leetcode.com/problems/longest-consecutive-sequence/ */

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size() == 0){
            return 0;
        }
        if(nums.size() == 1){
            return 1;
        }
        int localMax = 1;
        int globalMax = INT_MIN;
        int current = *nums.begin();
        cout<<current;
        for(auto itr = nums.begin() + 1; itr!= nums.end(); itr++){
            if(*itr == current+1){
                localMax++;
                current = *itr;
            }else if(*itr == current){
                continue;
            }
            else{
                
                if(localMax > globalMax){
                    globalMax = localMax;
                }
                localMax = 1;
                current = *itr;
            }
        }
        if(localMax > globalMax){
            globalMax = localMax;
        }
        return globalMax;
    }
};
