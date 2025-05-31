// User function Template for C++

class Solution {
  public:
    // Function to find position of first set bit in the given number.
    int getFirstSetBit(int n) {
        // Your code here
        for(int i=0;i<=log2(n);++i)
        {
            if(((n>>i)&1)==1)
            {
                return i+1;
            }
        }
    }
};