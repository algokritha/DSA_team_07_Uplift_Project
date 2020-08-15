/* Problem Link => https://leetcode.com/problems/permutation-sequence/ */

class Solution {
public:
    string getPermutation(int n, int k) {
        string val = "";
        for(int i=1; i<=n; i++){
            val += to_string(i);
        }
        
        int count = 1;
        if(k == 1){
            return val;
        }
        while(next_permutation(val.begin(), val.end()) && count != k){
            count++;
            if(count == k){
                break;
            }
        }
        return val;
        
    }
};

