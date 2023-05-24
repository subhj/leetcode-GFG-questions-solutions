class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
   
        int  n=nums1.size();
        int m =nums2.size();
          int ptr1 =0;
          int count =0;
          
          int largestA=0,largestB=0,c;
          for(int i=0 ;i<n; i++){
               int count =0;
               for(int j=i,ptr1=0; j<n&& ptr1<m; j++,ptr1++){
                   if(nums1[j] == nums2[ptr1]){
                       count++;
                   }
                   else{
                       count=0;
                   }
                  largestA = max(largestA,count);
               }
        }

    
        for(int i=0 ;i<m; i++){
               int count =0;
               for(int j=i,ptr1=0; j<m && ptr1<n; j++,ptr1++){
                   if(nums2[j] == nums1[ptr1]){
                       count++;
                   }
                   else{
                       count=0;
                   }
                 largestB = max(largestB,count);
               }
        }
        
           c = max(largestA,largestB);
            return c;
    }
};
