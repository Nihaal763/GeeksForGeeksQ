class Solution {
  public:
    int nCr(int n, int r) {
        // code here
        if(r>n)
        {
            return 0;
        }
        else if(r==0||n==0)
        {
            return 1;
        }
        else
        {
            long long int result = 1;
            for(int i=1;i<=r;++i)
            {
                result*=(n-r+i);
                result/=i;
            }
            
            return (int)result;
        }
    }
};