class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) 
    {
        
        vector<vector<int>> ans(n,vector<int>(n,0));
        
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<=i;++j)
            {
                if(j==0||j==i)
                {
                    ans[i][j]=1; 
                } 
                else 
                {
                    ans[i][j]=ans[i - 1][j - 1]+ans[i - 1][j];
                }
            }
        }
        

        return ans[n-1];
    }
};
