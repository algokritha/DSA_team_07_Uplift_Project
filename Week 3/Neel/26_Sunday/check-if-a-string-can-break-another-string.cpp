class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        int a1[s1.length()];
        int a2[s2.length()];
        int n = s1.length();
        for(int i=0; i< s1.length(); i++){
            a1[i] = s1[i];
            a2[i] = s2[i];
        }
        
        sort(a1, a1+n);
        sort(a2, a2+n);
        for(int i=0; i<n; i++){
            cout<<a1[i];
        }
        bool first = true;
        bool second = true;
        for(int i=0; i<n; i++){
            if(a1[i] < a2[i]){
                first = false;
            }
        }
        
        for(int i=0; i<n; i++){
            if(a1[i] > a2[i]){
                second = false;
            }
        }
        
        if(first == true || second == true){
            return true;
        }else{
            return false;
        }
    }
};
