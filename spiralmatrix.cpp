class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int n = matrix.size();
        int m = matrix[0].size();
        int total_element = m*n;
        int count =0; 
            
          int startingrow= 0;
          int startingcol =0;
          int endingrow = n-1;
          int endingcol = m-1;
          
    
        while(count < total_element){
            for(int i=startingcol;  i<=endingcol && count<total_element; i++){
                ans.push_back(matrix[startingrow][i]);
                count++;
            }
              startingrow++;

             for(int i=startingrow;  i<=endingrow && count<total_element; i++){
                ans.push_back(matrix[i][endingcol]);
                count++;
            }
                     endingcol--;

             for(int i=endingcol;  i>=startingcol && count<total_element; i--){
                ans.push_back(matrix[endingrow][i]);
                count++;
            } 
                     endingrow--;



             for(int i=endingrow;  i>=startingrow && count<total_element; i--){
                ans.push_back(matrix[i][startingcol]);
                count++;
            }
                   startingcol++;
        }
        
        return ans;
    }
};
