class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int adjMatrix[101][101] = {0};
        int x;
        queue<int> q;
        for(int i=0; i< graph.size(); i++){
            for(auto x: graph[i]){
                adjMatrix[i][x] = 1;
                adjMatrix[x][i] = 1;
            }
        }
        x = graph.size();
        int colored[x];
        
        for (int i = 0; i < x; ++i) {
		    colored[i] = -1;
        }
        
        colored[0] = 1;
        q.push(0);
        int count = 1;
        while(!q.empty() && count != x){
            
            
            int u = q.front();
            q.pop();
            
            if (adjMatrix[u][u] == 1) {
		        return false;
            }
            
            for(int v=0; v<x; v++){
                if (adjMatrix[u][v] && colored[v] == -1) 
                { 
                    // Assign alternate color to this adjacent v of u 
                    colored[v] = 1 - colored[u]; 
                    q.push(v); 
                    count++;
                } 


                else if (adjMatrix[u][v] && colored[v] == colored[u]) {
                    return false; 
                }
             
        }
            
        if(graph[u].size() == 0 && u != x-1){
            while(colored[u+1] > -1){
                q.push(u+1);
                u++;
            }
        }
    }
    
    return true; 
    }
};
