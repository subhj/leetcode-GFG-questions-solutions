class Solution {
public:
     
    string customSortString(string order, string s) {
         map<char,int>hashmap;
         string ans="";
         for(int i=0; i<s.length(); i++){
             hashmap[s[i]]++;
         }
               for(auto x: order){
                   if(hashmap.find(x) != hashmap.end()){
                       auto temp = hashmap.find(x);
                       int count = temp->second;
                       string str(count,x);
                       ans+=str;
                       hashmap.erase(x);
                   }
               }
                 for(auto x: hashmap){
                    string str(x.second,x.first);
                    ans+=str;
                 }
             return ans; 
    }
};
