
#include <bits/stdc++.h>
using namespace std;

struct Node*{
    int freq;
    char val;
    Node* left;
    Node* right;
};

Node* huffman(priority_queue<pair<int, char>> freq_n_val){
    if(priority_queue.size() == 1){
        
    }
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    int len = str.length();
	    int freq[n];
	    priority_queue<pair<int, char>> freq_n_val(n);
	    for(int i=0; i<n; i++){
	        cin>>freq[i];
	    }
	    
	    for(int i=0; i<n; i++){
	        char val = str[i];
	        int frequency = freq[i];
	        freq_n_val.push(make_pair(frequency, val));
	    }
	    Node* root = new Node();
	    root = huffman(freq_n_val);
	}
	return 0;
}
