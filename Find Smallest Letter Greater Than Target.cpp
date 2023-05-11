class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int target_code =int(target);

          for(auto it: letters){
              int letter = int(it);
              if(target_code <letter) {
                  return it;
              }
              
          }
                 return letters[0];
         
    }
};
