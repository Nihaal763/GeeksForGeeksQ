//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int sumOfRowCol(int N, int M, vector<vector<int>> A) 
    {
        vector<int>rowSum;
        vector<int>colSum;
        
        for(int i=0;i<N;++i)
        {
            int sum =0;
            for(int j=0;j<M;++j)
            {
                sum+=A[i][j];
            }
            rowSum.push_back(sum);
        }
        
        for(int j=0;j<M;++j)
        {
            int sum =0;
            for(int i=0;i<N;++i)
            {
                sum+=A[i][j];
            }
            colSum.push_back(sum);
        }
        
        if(M>N)
        {
            for(int i=0;i<N;++i)
            {
                if(colSum[i]!=rowSum[i])
                {
                    return 0;
                }
            }
            
        }
        else
        {
            for(int i=0;i<M;++i)
            {
                if(colSum[i]!=rowSum[i])
                {
                    return 0;
                }
            }
            
        }
        return 1;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> A(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> A[i][j];
        Solution ob;
        cout << ob.sumOfRowCol(N, M, A) << "\n";
    
cout << "~" << "\n";
}
}
// } Driver Code Ends