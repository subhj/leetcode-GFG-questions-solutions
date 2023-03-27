class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        vector<bool>result;
        int n= candies.size();
        int q=0;
        for(int i=0; i<n; i++){
        q=0;
            for(int j=0; j<n; j++){
                if(candies[i] + extraCandies >= candies[j]){
                  continue;
                }
            
            else {
            q=1;
            break;
            }
            }
             if (q==1){
                 result.push_back(false);
             }
             else{
             result.push_back(true);
             }
        }
        return result;
    }
    };



















