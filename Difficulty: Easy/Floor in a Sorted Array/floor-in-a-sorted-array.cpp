class Solution {
  public:

    int findFloor(vector<int>& arr, int x) {
        // Your code here
        int s = 0,e =arr.size()-1,ans=-1;
        while(s<=e)
        {
            int m = (s+e)/2,flag = 0;
            if(arr[m]==x)
            {
               ans = m;
               s = m+1;
               flag = 1;
            }
            else if(arr[m]<x && flag!=1)
            {
                ans = m;
                s = m+1;
            }
            else
            {
                e = m-1;
            }
        }
        return ans;
    }
};
