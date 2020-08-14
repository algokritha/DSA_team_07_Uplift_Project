/* Problem Link => https://leetcode.com/problems/palindrome-partitioning/ */


class Solution {
public:
    bool isPalin(string& s, int start, int end){
        while(start<=end){
            if(s[start] != s[end]){
                return false;
            }
            start++;end--;
        }
        return true;
    }
    
    void dfs(vector<vector<string>>& res, vector<string>& temp, int idx, string& s){
        
        if(idx == s.length()){
            res.push_back(temp);
            return;
        }
        
        for(int i=idx; i<s.length(); i++){
            if(isPalin(s, idx, i)){
                temp.push_back(s.substr(idx, i - idx + 1));
                dfs(res, temp, i + 1, s);
                temp.pop_back();    
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        //string palin;
        vector<string> temp;
        dfs(res, temp, 0, s);
        return res;
    }
};
