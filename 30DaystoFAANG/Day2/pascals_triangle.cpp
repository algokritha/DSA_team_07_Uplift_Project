/* Problem Link => https://leetcode.com/problems/pascals-triangle/ */

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> val;
        val.resize(numRows);
        if(numRows == 0){
            return val;
        }else if(numRows == 1){
            val[0].push_back(1);
            return val;
        }
        val[0].push_back(1);
        val[1].push_back(1);
        val[1].push_back(1);
        for(int i=2; i<numRows; i++){
            val[i].push_back(1);
            for(int j=0; j< val[i-1].size() - 1; j++){
                val[i].push_back(val[i-1][j] + val[i-1][j+1]);
            }
            val[i].push_back(1);
        }
        return val;
    }
};
