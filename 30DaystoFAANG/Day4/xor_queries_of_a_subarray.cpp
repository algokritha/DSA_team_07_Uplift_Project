/* Problem Link => https://leetcode.com/problems/xor-queries-of-a-subarray/

/* Brute Force */
class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> res;
        for(auto x: queries){
            
                int fir = x[0];
                int sec = x[1];
                int val = arr[fir];
                for(int i = fir+1; i<=sec; i++){
                    val ^= arr[i];
                }
                //int val = arr[fir]^arr[sec];
                
                if(fir == sec){
                    val = arr[fir];
                }
                res.push_back(val);
            
        }
        return res;
    }
};
