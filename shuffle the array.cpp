class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       int len =2*n;
       vector<int>ans(2*n);

       int x=0, y=n;
       int a=0;
        while(a<len){
         
          ans[a++] = nums[x++];
          ans[a++] = nums[y++];
        }
         return ans;


        
    }
};
