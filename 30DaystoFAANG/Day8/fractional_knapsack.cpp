/* Problem Link => https://practice.geeksforgeeks.org/problems/fractional-knapsack/0 */

#include <bits/stdc++.h>
using namespace std;

struct item{
    int value;
    int weight;
    double v_by_w;
};

bool comparator(struct item m1, struct item m2){
    return m1.v_by_w > m2.v_by_w;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n, w;
	    cin>>n>>w;
	    struct item items[n];
        for(int i=0; i<n; i++){
            cin>>items[i].value;
            cin>>items[i].weight;
            items[i].v_by_w = items[i].value/items[i].weight;
        }
        
        
        sort(items, items + n, comparator);
    
        
        int i=0;
        double val = 0;
        int curWeight = 0;
        for(int i=0; i<n; i++){
            if(items[i].weight + curWeight < w){
                val += items[i].value;
                curWeight += items[i].weight;
            }else{
                int remain = w - curWeight;
                val += ((double)remain/items[i].weight)*(items[i].value);
                break;
            }
        }
        cout<<val<<"\n";
	}
	return 0;
}
