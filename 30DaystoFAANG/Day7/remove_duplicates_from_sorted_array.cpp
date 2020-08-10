/* Remove duplicates from sorted array */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int val = INT_MIN;
        for(auto i=nums.begin(); i!=nums.end(); i++){
            if(val != *i){
                val = *i;
                //cout<<*i<<"\n";
            }else{
                //cout<<"Erase "<<*i<<"\n";
                nums.erase(i);
                i--;
                //i++;
            }
        }
        return nums.size();
    }
};
