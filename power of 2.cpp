class Solution{
    public:
    bool isPowerofTwo(long long n){
        if (n==0)
        return 0;
       long long val = (n & (n-1));
       if(val == 0)
       return 1;
       else
       return 0;
        
    }
};
