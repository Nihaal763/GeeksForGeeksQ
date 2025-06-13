class Solution {
  public:
    long long sumOfDivisors(long long n) {
        // Code here
        long long int sum =0;
        for(long long int i=1;i<=n;++i)
        {
           sum+=i*(n/i);//Here wee are checking how many 
           //times it is contributing to the sum
        }
        return sum;
    }
};