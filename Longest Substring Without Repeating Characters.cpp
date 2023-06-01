class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int result =0;
         int l=0,r=0;
         unordered_map<char,int>output;
         while(r<s.length()){
             auto it = output.find(s[r]);
             if(it!=output.end() && it->second>=l){
                 l = it->second +1;
             }
             else{
                 result = max(result,r-l+1);
             }
             output[s[r]] = r;
             r++;
         }
         return result;
    }
};
