class Solution {
  public:
    int gcd(int a, int b) {
        // Using Euclidean Algorithm
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
};
