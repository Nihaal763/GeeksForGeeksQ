class Solution {
  public:
    // Function to find transpose of a matrix.
    void transpose(vector<vector<int>>& mat, int n)
    {
        for(int i=0;i<n;++i)
        {
            for(int j=i+1;j<n;++j)
            {
                int temp =mat[i][j];
                mat[i][j]=mat[j][i];
                mat[j][i]=temp;
            }
        }
        
    }
};