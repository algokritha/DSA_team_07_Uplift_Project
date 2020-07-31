class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        int jumbo, small;
        jumbo = 0;
        small = 0;
        vector<int> val;
        if(tomatoSlices == 0 || cheeseSlices == 0){
            val.push_back(0);
            val.push_back(0);
            return val;
        }
        int arr[cheeseSlices];
        for(int i=0; i<cheeseSlices; i++){
            arr[i] = 2;
        }
        long long total = cheeseSlices*2;
        if(tomatoSlices%2 != 0 || total > tomatoSlices){
            return val;
        }
        
        int i=0;
        while(i != cheeseSlices){
            if(total < tomatoSlices){
                arr[i] = 4;
                total += 2;
            }else if (total == cheeseSlices){
                break;
            }
            i++;
        }
        for(int i=0; i<cheeseSlices; i++){
            //cout<<arr[i]<<" ";
            if(arr[i] == 4){
                jumbo++;
            }else{
                small++;
            }
        }
        val.push_back(jumbo);
        val.push_back(small);
        return val;
    }
};
