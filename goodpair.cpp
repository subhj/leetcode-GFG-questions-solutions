class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
    //   int i,j;
    //   i=j=0;
    //   int goodpair=0;
    //   for(i=0; i<nums.size(); i++){
    //       for(j=i+1; j<nums.size(); j++){
    //           if(nums[i]==nums[j] && i<j){
    //               goodpair++;
    //           }
    //       }
    //   }
    //   return goodpair;
      unordered_map<int,int>count;
      int ans=0;
      for(auto num: nums){
          ans += count[num];
          count[num]++;
      }
      return ans;
    }
};
