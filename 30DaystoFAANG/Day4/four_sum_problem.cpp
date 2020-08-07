/* Problem Link => https://leetcode.com/problems/4sum/ */

/* Two Pointer Approach */
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        for(int i=0; i< n-3; i++){
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }
            for(int j = i+1; j<n-2; j++){
                if(j>1 && nums[j] == nums[j-1] && (j-i)>1){
                    continue;
                }
                
                int k = j+1;
                int l = n-1;
                
                while(k<l){
                    if(nums[i] + nums[j] + nums[k] + nums[l] - target == 0){
                        res.push_back({nums[i], nums[j], nums[k], nums[l]});
                        
                        while(k+1<l-1 && nums[k] == nums[k+1] && nums[l] == nums[l-1]){
                            k++;l--;
                        }
                        k++;l--;
                    }else if(nums[i] + nums[j] + nums[k] + nums[l] > target){
                        l--;
                    }else{
                        k++;
                    }
                    
                    
                }
            }
        }
        return res;
    }
};
