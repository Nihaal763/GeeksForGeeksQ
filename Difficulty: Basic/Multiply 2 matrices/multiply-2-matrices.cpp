
class Solution {
  public:
    void Multiply(vector<vector<int>>& matrixA, vector<vector<int>>& matrixB) 
    {
        // Code here
        int n = matrixA.size();
        vector<vector<int>> R(n, vector<int>(n,0));
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<n;++j)
            {
                long prod=0;
                for(int k=0;k<n;++k)
                {
                    prod+= matrixA[i][k]*matrixB[k][j];
                }
                R[i][j] = prod;
            }
        }
        matrixA=R;
    }
};