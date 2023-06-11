class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
           
        vector<int>ans;
            sort(nums.begin(),nums.end());
        for(int i= 1; i<nums.size()-1; i++){
              ans.push_back(nums[i]);
        } 
        if(!ans.empty()){
            return ans[0];
        }
        else{
            return -1;
        }
        
    }
};
