int spanningTree(int V, int E, vector<vector<int>> &graph) {
    // code here
    int selected[V] = {0};
    int no_edge = 0;
    selected[1] = 1;
    int mini, x, y;
    int sum = 0;
    while(no_edge < V-1){
        mini = INT_MAX;
        x = 0;
        y = 0;
        for(int i=0; i<V; i++){
            if(selected[i] == 1){
                for(int j=0; j<V; j++){
                    if(!selected[j] && graph[i][j]){
                        if(mini > graph[i][j]){
                            mini = graph[i][j];
                            x = i;
                            y = j;
                        }
                    }
                }
            }
        }
        
        sum += mini;
        no_edge++;
        selected[y] = 1;
    }
    return sum;
}
