class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        // code here.
        int N = arr.size();
        vector<long>pf(N,0);
        unordered_map<long,int>freq;
        long sum =0;
        int count=0;
        freq[0]=1;
        for(int i=0;i<N;++i)
        {
            sum+=arr[i];
            if(freq.find(sum)!=freq.end())
            {
               count+=freq[sum];  
            }
            ++freq[sum];
        }
        return count;
       
    }
};