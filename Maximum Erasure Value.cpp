class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
     unordered_set<int>ans;
     int currsum =0,i,j;
     int newsum =0;
     for(i=0,j=0; j<nums.size(); j++){
         while(ans.find(nums[j]) != ans.end()){
             ans.erase(nums[i]);
             currsum -= nums[i];
             i++;
         }
         ans.insert(nums[j]);
         currsum += nums[j];
         newsum = max(currsum , newsum);
     }
     return newsum;

    }
};
