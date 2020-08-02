#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int minimumDist(int values[], bool selected[]) 
{
	int min=INT_MAX,index;
              
	for(int i=0;i<6;i++) 
	{
		if(selected[i]==false && values[i]<=min)      
		{
			min=values[i];
			index=i;
		}
	}
	return index;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int graph[n][n];
	    int condition1, condition2;
	    for(int i=0; i< n; i++){
	        condition1 = i+1;
	        condition2 = 3*i;
	        if(condition1 < n){
	            graph[i][condition1] = 1;
	        }
	        if(condition2 < n){
	            graph[i][condition2] = 1;
	        }
	    }
	    
	    int values[n];
	    bool selected[n];
	    for(int i=0; i<n; i++){
	        values[i] = INT_MAX;
	        selected[i] = false;
	    }
	    values[0] = 0;
	    
	    selected[0] = true;
	    
        for(int i=0; i<n; i++){
            int m = minimumDist(values, selected);
            selected[m]=true;// m with minimum distance included in Tset.
    		for(int i = 0; i<n; i++)                  
    		{
    			// Updating the minimum distance for the particular node.
    			if(!selected[i] && graph[m][i] && values[m]!=INT_MAX && values[m]+graph[m][i]<values[i])
    				values[i]=values[m]+graph[m][i];
    		}
        }    
	    
	    cout<<values[n-1]<<"\n";
	}
	return 0;
}
