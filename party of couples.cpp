//User function Template for C++

class Solution{
    public:
    int findSingle(int N, int arr[]){
        int count =0;
        for(int i=0; i<N; i++){
            count = count ^ arr[i];
        }
        return count;
    }
};
