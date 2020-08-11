/* Problem Link => https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room/0 */

#include <bits/stdc++.h>
using namespace std;

struct meeting{
    int start;
    int end;
    int index;
};

bool comparator(struct meeting m1, meeting m2) 
{ 
    return (m1.end < m2.end); 
} 

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    struct meeting meet[n];
	    for(int i=0; i<n; i++){
	        cin>>meet[i].start;
	    }
	    for(int i=0; i<n; i++){
	        cin>>meet[i].end;
	    }
	    
	    for(int i=0; i<n; i++){
	        meet[i].index = i+1;
	    }
	 
	    sort(meet, meet + n, comparator); 
        
	    vector<int> m; 
	    m.push_back(meet[0].index);
	    int time_limit = meet[0].end;
	    
	    for(int i=1; i<n; i++){
	        if(meet[i].start >= time_limit){
	            m.push_back(meet[i].index);
	            
	            time_limit = meet[i].end;
	        }
	    }
	    
	    for(auto x: m){
	        cout<<x<<" ";
	    }
    cout<<"\n";
	}

	return 0;
}
