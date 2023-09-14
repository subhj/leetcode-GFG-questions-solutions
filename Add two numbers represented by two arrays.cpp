class Solution {
public:
    vector<int> factorial(int N){
        vector<int> ans;
         int i;
         int fact =1;
         for( i=1; i<N; i++){
             fact *= i;
             
         }
         while(){
             int digit = fact%10;
             ans.push_back(digit);
             digit = digit/10;
         }
          reverse(ans.begin(),ans.end());
          return ans;
    }
};
