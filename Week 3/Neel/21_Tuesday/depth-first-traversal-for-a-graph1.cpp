
vector <int> dfs(vector<int> g[], int N)
{
    
    // Your code here
    stack<int> s;
    int visited[N] = {0};
    s.push(0);
    visited[0] = 1;
    vector<int> val;
    
    while(!s.empty()){
        int x = s.top();
        s.pop();
        val.push_back(x);
        
        for(auto m: g[x]){
            if(visited[m] == 0){
                s.push(m);
                visited[m] = 1;
            }
        }
    }
    return val;

}
