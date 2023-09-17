class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        //  int max = INT_MIN;
            
            for(int i=0; i<nums.size(); i++){
                if(nums[i]>nums[i+1]){
                   return i;
                }

            }
           return nums.size()-1;
            // for(int i=0; i<nums.size(); i++){
            //     if(nums[i]==max){
            //         return i;
            //     }
            // }

     
    }
};
