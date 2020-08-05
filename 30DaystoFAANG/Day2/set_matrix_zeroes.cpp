/* Problem Link => https://leetcode.com/problems/set-matrix-zeroes/ */

class Solution {
public:
    void makeZeroes(vector<vector<int>>& matrix, int m, int n, int row, int column){
        //cout<<row<<" "<<column<<"\n";
        for(int i=0; i<row; i++){
            matrix[i][n] = 0;
        }
        
        for(int i=0; i<column; i++){
            matrix[m][i] = 0;
        }
    }
    
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int column = matrix[0].size();
        vector<pair<int, int>> values;
        
        for(int i=0; i<row; i++){
            for(int j=0; j< column; j++){
                if(matrix[i][j] == 0){
                    values.push_back(make_pair(i, j));
                }
            }
        }
        
        for(int i=0; i<values.size(); i++){
            //cout<<values[i].first<<" "<<values[i].second;
        }
        
        for(auto x: values){
            //cout<<x.first<<" "<<x.second<<"\n";
            makeZeroes(matrix, x.first, x.second, row, column);
        }
    }
};
