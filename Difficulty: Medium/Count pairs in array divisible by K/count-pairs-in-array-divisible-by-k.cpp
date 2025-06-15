// User function Template for C++

class Solution {
  public:
    long long countKdivPairs(int A[], int n, int K) 
    {
        // code here
        for(int i=0;i<n;++i)
        {
            A[i]=(A[i]%K);
        }
        
        vector<int> count(K,0);
        long long int pairs = 0;
        for(int i =0;i<n;++i)
        {
            int t = K-A[i];
            if(A[i]==0)
            {
                t = 0;
            }
            pairs = pairs+count[t];
            ++count[A[i]];
        }
        
        return pairs;
    }
};