class Solution {
  public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(vector<int>& arr) {
        // Your code here
        int N = arr.size();
        vector<long> pf(N,0);
        long sum =0;
        for(int i=0;i<N;++i)
        {
            sum+=arr[i];
            pf[i]=sum;
        }
        unordered_set <long> hs;
        hs.insert(0);
        for(int i=0;i<N;++i)
        {
            if(hs.find(pf[i])!=hs.end())
            {
                return true;
            }
            else
            {
                hs.insert(pf[i]);
            }
        }
        return false;
    }
};