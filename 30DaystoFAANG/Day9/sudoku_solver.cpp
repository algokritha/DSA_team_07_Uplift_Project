/* Problem Link => https://leetcode.com/problems/sudoku-solver/ */

class Solution {
public:
    bool isSafe(vector<vector<char>>& board, char num, int i, int j){
        //check row
        int row = i - i%3, column = j - j%3;
        for(int col=0; col<9; col++){
            if(board[i][col] == num){
                return false;
            }
        }
        
        //check column
        for(int row = 0; row<9; row++){
            if(board[row][j] == num){
                return false;
            }
        }
        
        //check in subBox
        for(int x=0; x<3; x++)
            for(int y=0; y<3; y++)
                if(board[row+x][column+y] == num) 
                    return false;
        
        return true;
    }
    
    bool solveSudoku(vector<vector<char>>& board, int i, int j){
        if(i == 9){
            return true;
        }
        
        if(j == 9){
            return solveSudoku(board, i+1, 0);   
        }
        
        //Recursive Case
        //Try numbers from 1 to 9
        for(char c= '1'; c<='9'; c++){
            if(isSafe(board, c, i, j)){
                
                board[i][j] = c;
                
                bool dusraNoRakhPaye = solveSudoku(board, i, j+1);
                if(dusraNoRakhPaye){
                    return true;
                }
                
                board[i][j] = '.';
            }
        }
        
        return false;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        solveSudoku(board, 0, 0);
    }
};
