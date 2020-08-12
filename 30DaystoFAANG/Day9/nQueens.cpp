/* Problem link => https://practice.geeksforgeeks.org/problems/n-queen-problem/0 */

#include <bits/stdc++.h>
using namespace std;

bool isSafe(int board[][10], int i, int j, int n){
    //check vertically
    for(int m = 0; m<i; m++){
        if(board[m][j] == 1){
            return false;
        }
    }
    
    
    //check left diagonal
    int x = i;
    int y = j;
    while(x >= 0 && y >= 0){
        if(board[x][y] == 1){
            return false;
        }
        x--;
        y--;
    }
    
    //check right diagonal
    x = i;
    y = j;
    while(x>=0 && y <= n){
        if(board[x][y] == 1){
            return false;
        }
        x--;
        y++;
    }
    
    return true;
}

bool solveNQueen(int board[][10], int i, int n){
    
    //Base case
    if(i == n){
        //Print here
        cout<<"[";
        for(int x = 0; x < n; x++){
            for(int y = 0; y < n; y++){
                if(board[x][y] == 1){
                    cout<<y+1<<" ";
                }
            }
        }
        cout<<"] ";
    }
    
    //Recursive Case
    
    for(int j=0; j<n; j++){
        //Check if i, j place is safe to place the queen
        if(isSafe(board, i, j, n)){
            board[i][j] = 1;
            
            bool nextQueenRakhPaye = solveNQueen(board, i+1, n);
            if(nextQueenRakhPaye){
                return true;
            }
            
            //Backtrack
            board[i][j] = 0;
        }
    }
    return false;
    
}

int main() {
	//code
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    int board[10][10] = {0};
	    
	    
	    bool ans = solveNQueen(board, 0, n);
	    
	    cout<<"\n";
	}
	
	return 0;
}
