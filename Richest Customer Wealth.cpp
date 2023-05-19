class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n= accounts.size();

        int sum=0;
        for(int j=0; j< accounts[0].size(); j++){
            sum+=accounts[0][j];
        }

        for(int i=1; i<n; i++){
            int sum2=0;
            for(int j=0; j<accounts[i].size(); j++){
                sum2+=accounts[i][j];
                if(sum2>sum){
                    sum=sum2;
                }
            }
        }
        return sum;
    }
};
