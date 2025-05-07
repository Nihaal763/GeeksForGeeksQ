//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        
        int n = arr.size();
        int total = 0;
        int flag = 0;
        for(int i=0;i<n;++i)
        {
            total=total+arr[i];
        }
        
        int point = 0,lsum=0,rsum=0;
        for(int i=0;i<n;++i)
        {
            lsum=lsum+arr[i-1];
            rsum = total - arr[i]-lsum;
            
            if(lsum==rsum)
            {
                point = i;
                ++flag;
                break;
            }
        }
        
        if(flag)
        {
            return point;
        }
        else
        {
            return -1;
        }
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.findEquilibrium(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends