string timeConversion(string s) {
     if(s[8] =='A')
     {
         if(s[0]=='1' && s[1] =='2'){
             s[0] ='0';
             s[1] = '0';
         }
     }
    else{
        if(s[0]=='0' || s[1]!='2'){
            s[0]+=1;
            s[1]+=2;
        }
    }
     s.resize(8);
    return s;
}
