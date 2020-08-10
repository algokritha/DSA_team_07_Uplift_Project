/* Problem Link => https://leetcode.com/problems/3sum/ */

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();
        sort(nums.begin(), nums.end());
            
        int j, k;
            
        for(int i=0; i<=n-3; i++){
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }
            
            j = i+1;
            k = n-1;
            if(j>1 && nums[j] == nums[j-1] && (j-i)>1){
                continue;
            }


            while(k > j){
                if(nums[i] + nums[j] + nums[k] == 0){
                    res.push_back({nums[i], nums[j], nums[k]});

                    while(nums[k] == nums[k-1] && k>j){
                        k--;
                    }
                    k--;
                }

                else if(nums[i] + nums[j] + nums[k] > 0){                   
                    k--;
                }else{
                    j++;
                }
            }
        }
        
        return res;
    }
};
