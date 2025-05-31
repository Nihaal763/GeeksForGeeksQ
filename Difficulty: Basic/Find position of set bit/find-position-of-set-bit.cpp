class Solution {
  public:
    int findPosition(int n) {
        // code here
        if(n>0 && ((n & (n-1))==0))
        {
            return log2(n)+1;
        }
        else
        {
            return -1;
        }
    }
};