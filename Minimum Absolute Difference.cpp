class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
          
          vector<vector<int>> abs;
          int difference = INT_MAX;
          int i;
          for(i=0; i<arr.size()-1; i++){
              difference = min(arr[i+1] - arr[i], difference);
          }

             for(i=0; i<arr.size()-1; i++){
               if(arr[i+1] - arr[i] == difference)
               abs.push_back({arr[i], arr[i+1]});
            
             }
        return abs;
    }
};
