class Solution {
  public:
    // Recursive function to get the N-th term
    long long helper(int N)
    {
        if (N == 1) return 0;
        if (N == 2) return 1;
        return (helper(N - 2) * helper(N - 2)) - helper(N - 1);
    }

    void gfSeries(int N) {
        for (int i = 1; i <= N; i++) {
            cout << helper(i) << " ";
        }
        cout << endl;
    }
};
