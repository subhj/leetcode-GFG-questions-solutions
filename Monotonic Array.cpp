class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool flag1 =true;
        bool flag2 = true;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] <nums[i+1] ){
                    flag1 = false;
            }

            else if(nums[i] >nums[i+1]){
                flag2 = false;
            }
            else{
            continue;
            }
        }
        return flag1 || flag2;
            
    }
};
