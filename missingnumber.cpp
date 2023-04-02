class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int xo=n;
        for(int i=0;i<n; i++){
            xo=xo^i;
            xo=xo^nums[i];
        }
        return xo;
    }
};
