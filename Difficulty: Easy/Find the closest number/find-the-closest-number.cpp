class Solution {
  public:
    int findClosest(vector<int>& arr, int k) {
        int N = arr.size();
        int s = 0, e = N - 1;
        int ans = arr[0];  

        while (s<=e)
        {
            int m = (e+s)/2;

            if(abs(arr[m] - k) < abs(ans - k)) 
            {
                ans = arr[m];
            } 
            else if(abs(arr[m] - k) == abs(ans - k) && arr[m] > ans)
            {
                ans = arr[m];
            }
            if (arr[m] < k)
            {
                s = m + 1;
            } else if (arr[m] > k)
            {
                e = m - 1;
            } 
            else 
            {
                return arr[m];
            }
        }
        return ans;
    }
};
