// User function template for C++
class Solution {
  public:

    long long int findBitwiseOR(long long int L, long long int R) {
        // complete the function her
      long long int shift = 0;
      while(L!=R)
      {
          L=L>>1;
          R=R>>1;
          ++shift;
      }
      
      long long int ans = (L<<shift)|((1LL<<shift)-1);
      return ans;
    }
};