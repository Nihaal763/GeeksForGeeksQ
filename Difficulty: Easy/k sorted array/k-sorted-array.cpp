// User function template for C++

class Solution {
  public:
    string isKSortedArray(int arr[], int n, int k) {
        // code here.
        int nums[n];
        copy(arr,arr+n,nums);
        sort(arr,arr+n);
        
        for(int i=0;i<n;++i)
        {
            int s = 0,e = n-1;
            while(s<=e)
            {
                int m = (s+e)/2;
                if(arr[m]==nums[i])
                {
                    if(i-m>k||m-i>k)
                    {
                        return "No";
                    }
                    else
                    {
                       break;
                    }
                }
                else if(arr[m]>nums[i])
                {
                    e = m-1; 
                }
                else
                {
                    s = m+1;
                }
            }
        }
        return "Yes";
    }
};