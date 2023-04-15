class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid,lb=0 ,ub=nums.size()-1;
        
        while(lb<=ub){
           mid = lb +(ub-lb)/2;

           if(nums[mid]==target){
                   return mid;
                   
           }

           else if(nums[mid]>target){
                ub=mid-1;
           }
             
           else  
           lb = mid+1;

        }
           return -1;
        }
    
};
