class Solution
{
    public:
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        int l=0, r=0;
        std:vector<int>ans;
        if(s==0){
            ans.push_back(-1);
            return ans;
        
        }
        
        bool isfound  = false;
        int sum = arr[0];
        while(r<n){
            if(sum ==s){
                isfound = true;
                break;
            }else if(sum<s){
                r++;
                if(r<n)
                    sum +=arr[r];
                
            }
            else{
                sum-= arr[l];
                l++;
            }
            
        }
        
        if(isfound){
            ans.push_back(l+1);
            ans.push_back(r+1);
            return ans;
        }
         
         ans.push_back(-1);
         return ans;
        
    }
    
};

       
