class Solution {
public:
    bool isPalindrome(string s) {
         
        int n = s.length();
        int i=0;
        int j =n-1;
        if(s == " "){
            return true;
        }
        while(i<j){
            if(!isalnum(s[i])){
                i++;
                continue;
            }
            else if(!isalnum(s[j])){
                j--;
                continue;
            }
            if(tolower(s[i]) != tolower(s[j])){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};
