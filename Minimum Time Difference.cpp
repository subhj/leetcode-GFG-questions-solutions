class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
            vector<int>minutes;
            int n = timePoints.size();
                      string curr;
            for(int i=0; i<n; i++){
                 curr = timePoints[i];
                int hours =  stoi(curr.substr(0,2));
                int minute =   stoi(curr.substr(3,2));
                int totalminute = hours * 60 + minute;
                minutes.push_back(totalminute);
            }

          sort(minutes.begin(),minutes.end());
             int minimum = INT_MAX;
             int m = minutes.size();
              int diff;
             for(int i=0; i<m-1; i++){
                 diff = minutes[i+1] - minutes[i];
                 minimum = min(minimum,diff);
             }
               int lastdiff1 = (minutes[0] + 1440) - minutes[m-1];
               int lastdiff2 = minutes[m-1] - minutes[0];
               int lastdiff = min(lastdiff1,lastdiff2);
               minimum = min(minimum,lastdiff);

               return minimum;

    }
};
