
class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // Code here
        int N =mat.size();
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


        for(int j=0;j<N;++j)
        {
            int s=0,e=N-1;
            while(s<e)
            {
                int temp = mat[s][j];
                mat[s][j] = mat[e][j];
                mat[e][j] = temp;
                ++s,--e;
            }
        }
    }
};