class Solution {
  public:
    int firstIndex(vector<int> &arr) {
        // Your code goes here
        int N = arr.size();
        int s = 0,e = N-1,ans = -1;
        
        while(s<=e)
        {
            int m = (s+e)/2;
            
            if(arr[m]==1)
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