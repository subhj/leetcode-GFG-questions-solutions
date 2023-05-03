class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>answr={{},{}};

        unordered_set<int>s1(nums1.begin(),nums1.end());
          unordered_set<int>s2(nums2.begin(),nums2.end());


          for(int s:s1){
              if(!s2.count(s)){
                  answr[0].push_back(s);
              }
          }
          for(int s:s2){
              if(!s1.count(s)){
                  answr[1].push_back(s);
              }
          }

        
        
        return answr;

    }
};
