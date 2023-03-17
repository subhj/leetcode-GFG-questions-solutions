class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int len = nums.size();
        sort(nums.begin(), nums.end());
            int count =0;
         for(int i=0; i<len; i++){
           count = (nums[len-1]-1) * (nums[len-2] -1);
         }
         return count;
    }
};
