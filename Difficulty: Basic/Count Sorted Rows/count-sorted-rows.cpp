//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int sortedCount(int N, int M, vector<vector<int>> Mat) {
        // code here
        int rc=0;
        for(int i=0;i<N;++i)
        {    
            bool inc = true,dec=true;
            for(int j=0;j<M-1;++j)
            {
                if(Mat[i][j]>=Mat[i][j+1])
                {
                    inc = false;
                }
                if(Mat[i][j]<=Mat[i][j+1])
                {
                    dec = false;
                }
            }
            if(inc||dec)
            {
                ++rc;
            }
        }
       
        return rc;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> Mat(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> Mat[i][j];
        Solution ob;
        cout << ob.sortedCount(N, M, Mat) << "\n";
    
cout << "~" << "\n";
}
}
// } Driver Code Ends