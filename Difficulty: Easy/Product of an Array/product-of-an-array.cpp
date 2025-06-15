class Solution {
  public:
    // arr[] is the array
    long long int product(vector<int> &arr) 
    {
        // code here
        const int MOD = 1000000007;
        long  long int product = 1;
        int N = arr.size();
        for(int i=0;i<N;++i)
        {
            product*=(arr[i]);
            product%=MOD;
        }
        
            return product;
    }
};