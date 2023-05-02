class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res{{}};
        for(int num:nums){
            int n = res.size();
            for(int j=0; j<n; j++){
                vector<int>temp = res[j];
                temp.push_back(num);
                res.push_back(temp);
            }
        }

        return res;        
        }

    
};
