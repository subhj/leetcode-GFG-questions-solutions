class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    int lftsum=0,rightsum=0,total=0;
        int n =nums.size();
        
         for(int i=0; i<n; i++){
             total +=nums[i];
         }

         for(int i=0; i<n; i++){
             rightsum =total-lftsum-nums[i];
             if(lftsum==rightsum){
                 return i;
             }
             lftsum +=nums[i];
         }
         return -1;
}       
};
