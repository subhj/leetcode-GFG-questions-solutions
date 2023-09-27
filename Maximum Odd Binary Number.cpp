class Solution {
public:
    string maximumOddBinaryNumber(string s) {
              int n = s.length();
        string news(n,0);
        
        for(int i=0; i<n; i++){
            news[i] = '0';
        }
         int count =0;
        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                count++;
            }
        }
         
           news[n-1] = '1';
         for(int i=0; i<count-1; i++){
             news[i] = '1';     
         }
        return news;
    }
};
