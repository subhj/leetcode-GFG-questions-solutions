class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        int r=matrix.size();
       int c=matrix[0].size();
                  
         vector<vector<int>>ans;
        for(int i =0; i<c; i++){
            vector<int>v;
            for(int j=0; j<r; j++){
                v.push_back(matrix[j][i]);
        }
        ans.push_back(v);
        }

        return ans;
        
    }
};
