// User function Template for C++

class Solution {
  public:
    int minxorpair(int N, int arr[]) {
        // code here
        sort(arr,arr+N);
        int ans = INT_MAX;
        for(int i=0;i<N-1;++i)
        {
            if(ans>(arr[i]^arr[i+1]))
            {
                ans = (arr[i]^arr[i+1]);
            }
        }
        return ans;
    }
};