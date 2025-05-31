// User function template for C++
class Solution {
  public:

    int onlyFirstAndLastAreSet(long long int n) 
    {
        // complete the function here
        int lsb =0;
        int msb =0;
        if((n&1)==1)
        {
            ++lsb;
        }
        int b = log2(n);
        if(((n>>b)&1)==1)
        {
            ++msb;
        }
        
        if(lsb && msb)
        {
            long long int a = 0;
            a= a|(1<<0);
            a= a|(1<<b);
            
            if(a==n)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        return 0;
    }
};