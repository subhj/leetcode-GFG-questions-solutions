class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
         int maximum = 0;
         int len = nums.size();
         for(int i=0; i<len; i++){

            maximum = abs((nums[0] * nums[1]) - (nums[len-1] * nums[len-2]));
         }

         return maximum;

    }
};
