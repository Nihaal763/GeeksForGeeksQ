// User function template for C++

class Solution {
  public:
    long long pairAndSum(int n, long long arr[]) {
        // code here
        long long int sum = 0;
        for(int i=0;i<32;++i)
        {
            long long  c = 0;
            for(int j=0;j<n;++j)
            {
                if((arr[j]>>i)&1)
                {
                    ++c;
                }
            }
            if(c>=2)
            {
                long long pairs = c*(c-1)/2;
                sum+=pairs*(1LL<<i);
            }
        }
        return (sum);
    }
};