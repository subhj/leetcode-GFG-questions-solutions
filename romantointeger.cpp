class Solution {
public:
    int romanToInt(string s) {
         unordered_map<char,int> romantointmap {
               { 'I',1},
               {'V',5},
               {'X',10},
               {'L',50},
               {'C',100},
               {'D',500},
               {'M',1000}
         };
         int sum =0;
         for(int i=0; i<s.size()-1;i++){
             if(romantointmap[s[i]] < romantointmap[s[i+1]]){
                 sum-= romantointmap[s[i]];
             }
             else{
                 sum +=romantointmap[s[i]];
             }
         }
         sum +=romantointmap[s.back()];
         return sum;
    }
};
