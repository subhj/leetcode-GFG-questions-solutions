#include <bits/stdc++.h>
using namespace std;



int main()
{
  int n;
  cin >> n;
  while (n--)
  {
          int n;
          cin>>n;
          vector<int>arr(n);

          for(int i=0; i<n; i++){
            cin>>arr[i];
          }   
         int ele= *min_element(arr.begin(),arr.end());
                  int minindex = find(arr.begin(),arr.end(),ele) -arr.begin();
                  arr[minindex ] += 1;
                  long long product =1;
                  for(auto x: arr){
                    product*= x;
                  }  
                   cout<<product<<endl;
                  }
}
