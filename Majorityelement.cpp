class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int mcount =0;
        int index =-1;
        for(int i=0; i<n; i++){
        int count =0;
        for(int j=0; j<n; j++){
          if(nums[i]==nums[j]){
              count++;
          }
        if(count>mcount)
            mcount=count;
            index=i;
        }
        }
        
        
         if(mcount>n/2){
             return nums[index];  
        }
        else {
            return 0;
        }
    }
    

};
