class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n =word1.size();
        int m = word2.size();
        string merge(n+m,' ');
        int i,j,k;
        i=j=k=0;
        while(i<n && j<m){
          merge[k++] = word1[i++];
           merge[k++] = word2[j++];
        }
        while(i<n){
            merge[k++] = word1[i++];
        }

        while(j<m){
            merge[k++] = word2[j++];
        }


        return merge;
    }
};
