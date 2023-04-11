class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int tt=0,p=0,sum2=0;
        for(int i=0;i<arr.size(); i++){
            tt+=arr[i];
        }
            if(tt%3!=0)
                return false;
            
        
        int tt2=tt/3;
        for(int i=0 ;i<arr.size(); i++){
            sum2+=arr[i];
            if (sum2==tt2){
                p++;
                sum2=0;
            }
        }
        return p>=3;
        
    }
};
