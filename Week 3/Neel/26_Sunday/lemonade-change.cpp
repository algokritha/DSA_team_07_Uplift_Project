class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int val5, val10, val20;
        val5 = 0;
        val10 = 0;
        val20 = 0;
        bool hasChange = true;
        for(int i = 0; i<bills.size(); i++){
            if(bills[i] == 5){
                val5++;
                cout<<5<<" "<<hasChange<<"\n";
            }
            else if(bills[i] == 10){
                if(val5>=1){
                    val5--;
                    val10++;
                }else{
                    hasChange = false;
                }cout<<"10"<<hasChange<<"\n";
            }
            else if(bills[i] == 20){
                if(val10 >= 1 && val5 >=1){
                    val10--;
                    val5--;
                }else if(val5 >= 3){
                    val5 -= 3;
                }else{
                    hasChange = false;
                }
                cout<<"20"<<hasChange<<"\n";
            }       
        }
        return hasChange;
    }
};
