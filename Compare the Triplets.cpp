vector<int> compareTriplets(vector<int> a, vector<int> b) {

    int acount=0,bcount=0;
  
    for(int i=0; i<3; i++){
        if(a[i]>b[i]){
            acount++;
        }
        else if(a[i]<b[i]){
            bcount++;
        }
    }
    vector<int>ans{acount,bcount};
    
    return ans;

}
