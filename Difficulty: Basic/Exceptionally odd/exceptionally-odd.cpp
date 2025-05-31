// User function template for C++

class Solution {
  public:
    int getOddOccurrence(int arr[], int n) {
        // code here
        int ans =0;
        for(int i=0;i<32;++i)
        {
            int count =0;
            for(int j=0;j<n;++j)
            {
                if(((arr[j]>>i)&1)==1)
                {
                    ++count;
                }
            }
            if((count&1)==1)
            {
                ans = ans|(1<<i);
            }
        }
        return ans;
    }
};