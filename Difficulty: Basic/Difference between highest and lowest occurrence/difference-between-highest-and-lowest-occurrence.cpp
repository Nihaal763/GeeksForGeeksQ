class Solution {
  public:
    // Function to find the difference between the maximum and minimum frequency of
    // elements.
    int findDiff(vector<int>& arr)
    {
        // code here
        int N = arr.size();
        unordered_map<int,int> freq;
        for(int i=0;i<N;++i)
        {
            ++freq[arr[i]];
        }
        int minval =INT_MAX;
        int maxval =INT_MIN;
        for(auto it:freq)
        {
            minval=min(minval,it.second);
            maxval=max(maxval,it.second);
        }
        
        return (maxval-minval);
        
    }
};