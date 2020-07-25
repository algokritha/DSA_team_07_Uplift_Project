class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        cout<<n; 
        int visited[1001] = {0};
        int count = 1;
        //visited[0] = 1;
        int key_found[1001] = {0};
        key_found[0] = 1;
        queue<int> q;
        q.push(0);
        
        while(!q.empty()){
            int x = q.front();
            q.pop();
            visited[x] = 1;
            
            for(auto m: rooms[x]){
                if(visited[m] == 0){
                    key_found[m] = 1;
                    visited[m] = 1;
                    count++;
                    q.push(m);
                }
            }
        }
        
        cout<<count<<" "<<n;
        if(count == n){
            return true;
        }else{
            return false;
        }
        //return false;
    }
};
