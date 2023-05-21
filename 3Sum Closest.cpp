class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n= nums.size();
        
        vector<int>ans;
        int min = INT_MAX;
        int closestsum = INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0; i<n-2; i++){
            
            int left = i+1;
            int right = n-1;
            while(left<right){
        
                   int sum = nums[i] + nums[left]+nums[right];
                    int mindiff = abs(sum - target);

                    if(mindiff<min){
                        min = mindiff;
                        closestsum = sum;
                    }
                   else if(sum<target){
                       left++;
                   }
                       else{
                           right--;
                       }
                }
            
              
   
        }
        return closestsum;
    }
};
