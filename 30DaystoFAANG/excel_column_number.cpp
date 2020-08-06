/* Problem Link => https://leetcode.com/problems/excel-sheet-column-number/ */

class Solution {
public:
    int titleToNumber(string s) {
        int place = -1;
        int sum = 0;
        for(int i=s.length() - 1; i>=0; i--){
            //cout<<s[i]<<" ";
            int val = s[i] - 64;
            //cout<<val<<" ";
            if(place == -1){
                sum += val;
            }else{
                int expo = pow(26, place);
                cout<<expo;
                cout<<sum;
                sum += (26*val*expo);
            }
            //cout<<sum<<" ";
            place++;
            //cout<<place;
        }
        return sum;
    }
};
