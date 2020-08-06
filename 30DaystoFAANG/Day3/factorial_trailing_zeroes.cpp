/*Problem Link => https://leetcode.com/problems/factorial-trailing-zeroes/ */

/* TLE */
class Solution {
public:
    int trailingZeroes(int n) {
        int countof5 = 0;
        int countof2 = 0;
        int temp;
        while(n!=0){
            temp = n;
            while(temp%5 == 0){
                temp = temp/5;
                countof5++;
            }
            while(temp%2 == 0){
                temp = temp/2;
                countof2++;
            }
            n--;
        }
        return countof5;
        
    }
};

/* Optimized method */

class Solution {
public:
    int trailingZeroes(int n) {
        int sum=0;
        int tmp=0;
        while(n/5>0)
        {
            tmp=n/5;
            sum+=tmp;
            n=tmp;
        }
        return sum;
        
    }
};
