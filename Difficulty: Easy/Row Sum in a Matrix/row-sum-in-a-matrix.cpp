//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    vector<int> rowSum(vector<vector<int>>& mat) {
        int N = mat.size();
        int M = mat[0].size();
        vector<int> res;
        for(int i =0;i<N;++i)
        {
            long sum =0;
            for(int j =0;j<M;++j)
            {
                sum+=mat[i][j];
            }
            res.push_back(sum);
        }
        return res;
    }
};



//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    while (tc-- > 0) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        }
        Solution sln;
        vector<int> ans = sln.rowSum(mat);
        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << endl << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends