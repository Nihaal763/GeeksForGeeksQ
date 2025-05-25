class Solution {
  public:
    static string magicSquare(vector<vector<int>>& mat) {
        // Code here
        int N = mat.size();
        int flag = 0;
        for(int i=0;i<N;++i)
        {
            for(int j=0;j<N;++j)
            {
                if(mat[i][j]==N*N)
                {
                    ++flag;
                    break;
                }
            }
        }
        if(flag)
        {
            int sum = 0;
            for(int i=0;i<N;++i)
            {
                sum+=mat[i][0];
            }
            
            for(int i=0;i<N;++i)
            {
                int sum1=0;
                for(int j=0;j<N;++j)
                {
                    sum1+=mat[i][j];
                }
                if(sum1!=sum)
                {
                    return "Not a Magic Square";
                }
            }
            
            for(int j=0;j<N;++j)
            {
                int sum1=0;
                for(int i=0;i<N;++i)
                {
                    sum1+=mat[i][j];
                }
                if(sum1!=sum)
                {
                    return "Not a Magic Square";
                }
            }
            
            return "Magic Square";
        }
        else
        {
            return "Not a Magic Square";
        }
    }
};