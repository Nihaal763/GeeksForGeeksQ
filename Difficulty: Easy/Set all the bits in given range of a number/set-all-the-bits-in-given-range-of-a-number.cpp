class Solution {
  public:
    int setAllRangeBits(int N, int L, int R) {
        // code here
        for(int i=L;i<=R;++i)
        {
            N=N|(1<<i-1);
        }
        return N;
    }
};