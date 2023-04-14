class Solution {
public:
    int firstBadVersion(int n) {
      int lb=1 ,ub=n;
            
          while(lb<=ub){
         int mid =lb+(ub-lb)/2;
          
          if(isBadVersion(mid)){
              ub=mid-1;
          }
          else if(!isBadVersion(mid)){
               lb=mid+1;
          }
           
          }

          return lb;
        

    }
};
