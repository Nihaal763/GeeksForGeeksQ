
class Solution {
  public:
    int count(int A, int B, int N) {
        int c=0;
        for(int i=A;i<=B;++i)
        {
            int dc = 0;
            for(int j=1;j*j<=i;++j)
            {
                if(i%j==0)
                {
                    if(j==i/j)
                    {
                        ++dc;
                    }
                    else
                    {
                        dc+=2;
                    }
                }
            }
          if(dc==N)
          {
              c++;
          }
        }
        return c;
    }
};