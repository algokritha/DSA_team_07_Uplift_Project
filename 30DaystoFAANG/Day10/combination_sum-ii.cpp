/* Problem Link => https://leetcode.com/problems/combination-sum-ii/ */

class Solution {
public:
    void dfs(vector<vector<int>>& res, vector<int>& path, int idx, int target, vector<int>& candidates){
        if(target == 0){
            res.push_back(path);
            return;
        }
        
        for(int i = idx; i<candidates.size(); i++){
            if(candidates[i] > target){
                return;
            }
            path.push_back(candidates[i]);
            dfs(res, path, i+1, target-candidates[i], candidates);
            path.pop_back();
        }
        
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> path;
        sort(candidates.begin(), candidates.end());
        dfs(res, path, 0, target, candidates);
        //vector<vector<int>>::iterator ip; 
        sort(res.begin(), res.end());
        res.erase(std::unique(res.begin(), res.end()), res.end());
        return res;
    }
};
