class Solution {
public:
    string removeOccurrences(string s, string part) {
           int n = s.length();
           int m = part.length();
           int removepos = s.find(part);
               while(removepos != string::npos ){
                   s.erase(removepos,m);
                   removepos = s.find(part);
               }

               return s;
    }
};
