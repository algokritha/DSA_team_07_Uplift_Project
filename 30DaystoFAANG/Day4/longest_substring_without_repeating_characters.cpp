/* Problem Link => https://leetcode.com/problems/longest-substring-without-repeating-characters/ */

/* Brute Force */
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = 0;
        int maxlen = INT_MIN;
        if(s.length() == 0){
            return 0;
        }
        if(s.length() == 1){
            return 1;
        }
        for(int i=0; i<s.length(); i++){
            unordered_map<int, int> val;
            int cur = i;
            len = 0;
            for(int j=i; j<s.length(); j++){
                if(val.find(s[j]) != val.end()){
                    cur = j;
                    break;
                }else{
                    val.insert({s[j], 1});
                    len++;
                }
                
                if(len > maxlen){
                    maxlen = len;
                }
            }
        }
            
        return maxlen;
    }
};
