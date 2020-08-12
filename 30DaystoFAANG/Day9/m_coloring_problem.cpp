/* Problem Link => https://practice.geeksforgeeks.org/problems/m-coloring-problem/0 */

#include <bits/stdc++.h>
using namespace std;

bool check(int graph[][51], int nodes[], int i, int color, int m, int n){
    //Color already not use for neightbours.
    
    for(int x=1; x<=n; x++){
        if(graph[i][x] != 0 && nodes[x] == m){
            return false;
        }
    }
    return true;
}

bool isPossible(int graph[][51], int nodes[], int curnode, int m, int n){
    //Base case
    if(curnode == n+1){
        return true;
    }
    
    //Recursive case
    
    for(int color = 1; color <= m; color++){
        if(check(graph, nodes, curnode, color, m, n)){
            nodes[curnode] = color;
            
            if(isPossible(graph, nodes, curnode+1, m, n)){
                return true;
            }
            //Backtrack
            nodes[curnode] = 0;
        }
    }
    return false;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n, m, e;
	    cin>>n;
	    cin>>m>>e;
	    int nodes[n+1] = {0};
	    int graph[51][51] = {0};
	    for(int i=0; i<e; i++){
	        int first, second;
	        cin>>first;
	        cin>>second;
	        graph[first][second] = 1;
	        graph[second][first] = 1;
	    }
	    
	    bool val = isPossible(graph, nodes, 1, m, n);
	    if(val){
	        cout<<1<<"\n";
	    }else{
	        cout<<0<<"\n";
	    }
	}
	return 0;
}
