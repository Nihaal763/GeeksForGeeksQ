//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        int N = arr.size();
        int sum=0,max=INT_MIN;
        for(int i=0;i<k;++i)
        {
            sum+=arr[i];
        }
        max =sum;
        int s=1,e=k;
        while(e<N)
        {
            sum=sum-arr[s-1]+arr[e];
            if(sum>max)
            {
                max = sum;
            }
            s++;
            e++;
        }
        return max;
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
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        int ans = ob.maximumSumSubarray(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends