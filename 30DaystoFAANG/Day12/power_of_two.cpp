/* Problem link => https://practice.geeksforgeeks.org/problems/power-of-2/0 */

#include <bits/stdc++.h>
using namespace std;

bool getAns(int x){
    return x && (!(x&(x-1)));  
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    bool val = getAns(n);
	    if(val){
	        cout<<"YES\n";
	    }else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}
