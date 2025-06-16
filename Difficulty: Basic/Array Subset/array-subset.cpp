class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        unordered_map<int,int>freq;
        int N = a.size();
        int M = b.size();
        
        for(int i=0;i<N;++i)
        {
            ++freq[a[i]];
        }
        
        for(int i=0;i<M;++i)
        {
            if(freq[b[i]]==0)
            {
                return false;
            }
            --freq[b[i]];
        }
        return true;
    }
};