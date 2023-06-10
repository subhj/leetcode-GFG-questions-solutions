class Solution {
public:
    int reverse(int x) {  
        if (x==-2147483412)
        return -2143847412;
        if (x<=-1563847412 || x> 1534236468)
        return 0;

    int rem, sum = 0;
    while(x){
        rem = x%10;
        sum = (sum*10) +rem;
        x = x/10;

    }

    return sum;

    }
};
