class Solution {
public:
    string removeDuplicates(string s) {
        int n  = s.length();
        for(int i=0; i<n-1; i++){
            if(s[i] == s[i+1]){
                s.erase(i,2);
                n= s.length();
                i = -1;
            }
        }
        return s;
    }
};
