/* Problem link => https://practice.geeksforgeeks.org/problems/set-bits/0 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<__builtin_popcount(n)<<"\n";
	}
	return 0;
}
