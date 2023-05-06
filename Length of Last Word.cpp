class Solution {
public:
    int lengthOfLastWord(string s) {
        
        bool flag = false;
       int  len=0;
        for(int i=s.size()-1; i>=0; i--){
            if(( s[i] >= 'a' && s[i]<='z') || (s[i] >= 'A' && s[i]<='Z')){
                flag = true;
                len++;
            }
            else {
                if(flag == true){
                    return len;
                }
            }
        }
        return len;
    }
};
