class Solution {
public:
    int subtractProductAndSum(int n) {
         
        int sum =0,temp=1,rem;
        while(n!=0){
         temp = temp * (n%10);
          sum = sum +(n%10);
          n=n/10;
    }
    return temp-sum;
    }
};
