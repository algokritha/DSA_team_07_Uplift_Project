/* Problem Link => https://practice.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array/0 */

#include <bits/stdc++.h>
using namespace std;

int findKthElement(int arr1[], int arr2[], int n, int m, int k_req){
    int k=0, i=0, j=0;
    while(i < m && j < n){
        if(arr1[i] < arr2[j]){
            k++;
            if(k == k_req){
                return arr1[i];
            }
            i++;
        }else{
            k++;
            if(k == k_req){
                return arr2[j];
            }
            j++;
        }
    }
    
    while(i < m){
        k++;
        if(k == k_req){
            return arr1[i];
        }
        i++;
    }
    
    while(j < n){
        k++; 
        if(k == k_req) 
            return arr2[j]; 
        j++; 
    }
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n, m, k;
	    cin>>n>>m>>k;
	    int arr1[n], arr2[m];
	    for(int i=0; i<n; i++){
	        cin>>arr1[i];
	    }
	    for(int i=0; i<m; i++){
	        cin>>arr2[i];
	    }
	    
	    int val = findKthElement(arr1, arr2, n, m, k);
	    cout<<val<<"\n";
	}
	return 0;
}
