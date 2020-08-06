/* Problem Link => https://leetcode.com/problems/powx-n/ */

class Solution {
public:
    double myPow(double x, int n) {
        if(n<0)
            return powx(1.0/x,-n);
        else 
            return powx(x,n);

    }
    
    double powx(double x,long long n)
    {
        if(n==0)return 1;
        double result=1;
        while(n>0)
        {
            if(n%2==1)
            {
                result*=x;
                n--;
            }
            else {
                x*=x;
                n/=2;
            }
        }
        return result;
    }
};
