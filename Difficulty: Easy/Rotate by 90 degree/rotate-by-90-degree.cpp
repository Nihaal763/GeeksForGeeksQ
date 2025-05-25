
class Solution {
  public:
    // Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int>>& mat)
    {
        int N = mat.size();
        for(int i=0;i<N;++i)
        {
            int s=0,e=N-1;
            while(s<e)
            {
                int temp = mat[i][s];
                mat[i][s] = mat[i][e];
                mat[i][e] = temp;
                ++s,--e;
            }
        }
        
        for(int i=0;i<N;++i)
        {
            for(int j=i+1;j<N;++j)
            {
                int temp = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] = temp;
            }
        }
    }
};
