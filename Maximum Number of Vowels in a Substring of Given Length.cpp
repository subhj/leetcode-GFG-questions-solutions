class Solution {
public:
bool isvowel(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    return true;
    else
    return false;
    
}
    int maxVowels(string s, int k) {
         
         int a=s.size();
         int i=0;
         int count=0,mcount=0;
         for(i=0; i<k; i++){
           if(isvowel(s[i]))
               count++;
         
          if(count == k){
              return count;
          }
         }

            mcount = count;
         for(i=k; i<a; i++){
           if(isvowel(s[i-k])){
           count--;
           }
           if(isvowel(s[i])){
               count++;
           }
           
           mcount = max(mcount,count);
         }
         return mcount;
    }
};
