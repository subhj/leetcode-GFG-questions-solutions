class Solution {
public:
    int bulbSwitch(int n) {
        int sum =0,count=0;
     for(int i= 1; i<=n; i+=2){
         sum = sum+i;
         if(n<sum){
             break;
         }
         count++;
     }
      return count;

    }
};