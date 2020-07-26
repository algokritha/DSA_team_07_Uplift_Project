class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<vector<int>> adjList(10001, vector<int> (2));
        for(auto x: prerequisites){
            int val1 = x[0];
            int val2 = x[1];
            //cout<<val1<<" "<<val2<<"\n";
            adjList[val1].push_back(val2);
        }
        
        stack<int> s;
        int flag[numCourses];
        
        for(int i=0; i<numCourses; i++){
            flag[i] = -1;
        }
        if(prerequisites.size() == 1 || prerequisites.size() == 0 || numCourses == 1){
            return true;
        }
        
        s.push(0);
        while(!s.empty()){
            int x = s.top();
            
            bool check = true;
            for(auto val: adjList[x]){
                if(flag[val] == -1){
                    s.push(val);
                    flag[val] = 0;
                    
                }else if(flag[val] == 0){
                    return false;
                    
                }
            }
            
            int latest = s.top();
            for(auto x: adjList[latest]){
                if(flag[x] == -1){
                    check = false;
                }
            }
            if(check){
                s.pop();
            }
            
        }
        
        return true;
    }
    
    
};
