class Solution {
  public:
    int findUnique(int k, vector<int>& arr) {
        // code here
        int N =arr.size();
        unordered_map<int,int> freq;
        for(int i=0;i<N;++i)
        {
            ++freq[arr[i]];
        }
        for(auto it:freq)
        {
            if(it.second==1)
            {
                return it.first;
            }
        }
    }
};