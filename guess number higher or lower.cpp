
class Solution {
public:
    int guessNumber(int n) {
        int lb=1,ub=n;

        while(lb<=ub){
            int mid = lb+(ub-lb)/2;

            if(guess(mid)==0){
                   return mid;
            }
               else if(guess(mid)==1){
               lb=mid+1;
               }
               else {
                   ub=mid-1;
               }
        }
        return -1;
        
    }
};
