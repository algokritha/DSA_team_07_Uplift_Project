/* 
Problem Link => https://leetcode.com/problems/sort-colors/
O(n) solution but with 2 passes in array as 1st pass is to get the number of 0s 1s and 2s and the second pass is to update the values int he vector.
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int len = nums.size();
        //cout<<len;
        int num0 = 0;
        int num1 = 0;
        int num2 = 0;
        for(int i=0; i<len; i++){
            if(nums[i] == 0){
                num0++;
            }else if(nums[i] == 1){
                num1++;
            }else{
                num2++;
            }
        }
            
        for(int i=0; i<len; i++){
            if(num0 != 0){
                nums[i] = 0;
                num0--;
            }else if(num1 != 0){
                nums[i] = 1;
                num1--;
            }else{
                nums[i] = 2;
                num2--;
            }
        }
    }
};

/* Single pass solution */

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int len = nums.size();
        //cout<<len;
        int low = 0;
        int mid = 0;
        int high = len-1;
        while(mid <= high){
           if(nums[mid] == 0){
                swap(nums[low++], nums[mid++]);
                continue;
            }
            
            if(nums[mid] == 1){
                mid++;
                continue;
            }
            
            if(nums[mid] == 2){
                swap(nums[mid], nums[high--]);
                continue;
            }
        }
    }
};
