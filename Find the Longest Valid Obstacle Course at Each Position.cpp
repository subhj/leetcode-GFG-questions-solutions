class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) {
        
        vector<int>newlis(obstacles.size());
        vector<int>lis;
        int n= obstacles.size();
        for(int i=0; i<n; i++){
            int idx = upper_bound(lis.begin(),lis.end(),obstacles[i])-lis.begin();
            if(idx == lis.size()){
                lis.push_back(obstacles[i]);
            }
            else{
              lis[idx] = obstacles[i];
            }
            newlis[i] = idx+1;
        }

        return newlis;
    }
};
