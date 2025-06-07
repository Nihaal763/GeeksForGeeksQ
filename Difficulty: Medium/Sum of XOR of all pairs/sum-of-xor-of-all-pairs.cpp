class Solution {
  public:
    long long int sumXOR(int arr[], int n)
    {
        long long int sum = 0;
        for(int i = 0; i < 32; ++i)
        {
            int sbc = 0;
            for(int j = 0; j < n; ++j)
            {
                if((arr[j] >> i) & 1)
                {
                    ++sbc;
                }
            }
            int unsbc = n - sbc;
            long long pairs = 1LL * sbc * unsbc;
            sum += pairs * (1LL << i);
        }
        return sum;
    }
};
