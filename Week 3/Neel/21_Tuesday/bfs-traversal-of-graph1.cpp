vector <int> bfs(vector<int> g[], int N) {

    // Your code here
    queue<int> q;
    int visited[N] = {0};
    vector<int> val;
    q.push(0);
    while(!q.empty()){
        int x = q.front();
        val.push_back(x);
        q.pop();
        for(auto m: g[x]){
            if(visited[m] == 0){
                visited[m] = 1;
                q.push(m);
            }
        }
    }
    return val;
}