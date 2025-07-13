class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // k: element to be searched
    bool searchInSorted(vector<int>& arr, int k) 
    {
           int N = arr.size();
           int s = 0;
           int e = N-1;
           while(s<=e)
           {
               int m = (s+e)/2;
               if(arr[m]==k)
               {
                   return true;
               }
               else if(arr[m]>k)
               {
                   e = m-1;
               }
               else
               {
                   s = m+1;
               }
           }
        // Your code here
      return false;
        
    }
};