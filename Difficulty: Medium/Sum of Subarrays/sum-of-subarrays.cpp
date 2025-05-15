//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    long long subarraySum(vector<int>& arr) {
        // Your code goes here
        long N = arr.size();
        long long sum =0;
        int con = pow(10,9);
        for(int i=0;i<N;++i)
        {
            long long occ = (i+1)*(N-i);
            sum+=occ*arr[i];
        }
        return sum%(con+7);
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        long long res = obj.subarraySum(arr);
        cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends