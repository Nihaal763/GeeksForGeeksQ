//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        bool a =0;
        long sum =0;
        int N =arr.size();
        for(int i=0;i<N;++i)
        {
            sum+=arr[i];
        }
        long subsum=0;
        long remsum =0;
        for(int i=0;i<N-1;++i)
        {
            subsum+=arr[i];
            remsum = sum-subsum;
            if(subsum==remsum)
            {
               ++a;
            }
        }
        
        return a;
        
        
        
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t-- > 0) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        string temp;
        while (ss >> temp) {
            arr.push_back(stoi(temp));
        }

        Solution obj;
        bool res = obj.canSplit(arr);
        cout << (res ? "true" : "false") << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends