
#include <bits/stdc++.h>
using namespace std;

struct Node*{
    int freq;
    char val;
    Node* left;
    Node* right;
};

Node* huffman(priority_queue<pair<int, char>> freq_n_val){
    if(freq_n_val.size() == 1){
        return root;
    }
    bool found_star = false;
    
    for(auto x: freq_n_val){
        if(x->second == '*'){
            found_star = true;    
        } 
    }
    int min;
    int sec_min;
    while(freq_n_val.size() != 1){
        Node * temp = new Node();
        
        min = freq_n_val.top();
        freq_n_val.pop();
        sec_min = freq_n_val.top();
        freq_n_val.pop();
        temp->left = min->first;
        
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
