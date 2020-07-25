vector<int> topoSort(int N, vector<int> adj[]) {
    // Your code here
    int indegree[N] = {0};
    int visited = 0;
    vector<int> val;
    queue<int> q;
    q.push(0);
    for(int i=0; i<N; i++){
        for(auto m: adj[i]){
            indegree[m]++;
        }
    }
    cout<<indegree[0];
    for(int i=0; i<N; i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }
    
    while(!q.empty()){
        int x = q.front();
        q.pop();
        val.push_back(x);
        visited++;
        for(auto m: adj[x]){
            indegree[m]--;
            if(indegree[m] == 0){
                q.push(m);
            }
        }
    }
    return val;
}