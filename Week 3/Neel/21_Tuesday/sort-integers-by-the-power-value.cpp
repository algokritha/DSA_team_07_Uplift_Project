class Solution {
public:
    int getKth(int lo, int hi, int k) {
        multimap<int,int> nums;
        for(int i = lo; i<=hi; i++){
            cout<<i<<" ";
            int m = i;
            int power = 0;
            while(m != 1 ){
                if(m%2 == 0){
                    m = m/2;
                }else{
                    m = 3*m + 1;
                }
                power++;
            }
            nums.insert({power, i});
        }
        cout<<nums.size();
        map<int, int> :: iterator it;
        it = nums.begin();
        for(int i=0; i<k-1;i++){
            it++;
        }
        cout<<it->second;
            
        return it->second;

    }
};