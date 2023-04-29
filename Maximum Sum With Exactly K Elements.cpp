class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        
            sort(nums.begin(),nums.end(),greater<>());
        int sum =0;
         for(int i=0; i<k; i++){
             int element = nums[0];
             nums.erase(nums.begin());
             nums.push_back(element+1);
             sum += element;
             sort(nums.begin(),nums.end(),greater<>());
         }
        return sum;
    }
};
