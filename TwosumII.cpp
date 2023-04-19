class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
         
         int lb =0,ub = numbers.size()-1;
         for(int i =0; i<numbers.size();i++){
           if(numbers[lb] + numbers[ub]==target){
               return{lb+1,ub+1};
           }
           else if(numbers[lb]+numbers[ub] > target){
               ub--;
           }
           else  
           lb++;
         }  
         return {};
    }
};
