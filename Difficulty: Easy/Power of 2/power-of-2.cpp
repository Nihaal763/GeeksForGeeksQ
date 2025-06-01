// User function Template for C++

class Solution {
  public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(int n) {
        // code here
        n = n&(n-1);
        if(n==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};