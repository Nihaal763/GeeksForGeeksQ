class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
        int N = arr.size();
        int s = 0,e = N-1,ans = N;
        while(s<=e)
        {
            int m= (s+e)/2,flag = 0;;
            if(arr[m]==target)
            {
                ans = m;
                e = m-1;
                flag = 1;
            }
            else if(arr[m]>target && flag!=1)
            {
                ans = m;
                e = m-1;
            }
            else
            {
                s = m+1;
            }
        }
        return ans;
    }
};
