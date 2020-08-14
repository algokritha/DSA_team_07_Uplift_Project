/* Problem Link => https://leetcode.com/problems/combination-sum/ */

class Solution {
public:
    void dfs(vector<vector<int>>& res, vector<int>& path, vector<int>& candidates, int idx, int target){
         if(target == 0){
             res.push_back(path);
             return;
         }
        
         for(int i=idx; i< candidates.size(); i++){
             if(candidates[i] > target){
                 return;
             }
             
             path.push_back(candidates[i]);
             dfs(res, path, candidates, i, target - candidates[i]);
             path.pop_back();
         }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> path;
        sort(candidates.begin(), candidates.end());
        dfs(res, path, candidates, 0, target);
        return res;
    }
    
};
