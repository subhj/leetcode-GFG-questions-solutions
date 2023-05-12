class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int sns = strs[0].length();
        int n = strs.size();
        for(int i=1; i <n; i++){
            int j=0;
            while(j<strs[i].length()  && strs[i][j] == strs[0][j])
            j++;
            sns= min(j,sns);
        }

        return strs[0].substr(0,sns);
    }
}; 
