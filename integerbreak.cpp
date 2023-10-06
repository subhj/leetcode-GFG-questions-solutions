class Solution {
public:
    int integerBreak(int n) {
        if(n==2 || n==3)
            return n-1;
        // int product =1;
        // while(n>4){
        //     product *= 3;
        //     n -= 3;
        // }
        // return product*n;
        int q;
        int rem;
        int product;
         q = n/3;
         if(n%3 ==0){
             rem =1;
         }
         else if(n%3==1){
             q--;
             rem =4;
         }
         else{
             rem =2;
         }
         product = pow(3,q) *rem;
         return product;
    }
};
