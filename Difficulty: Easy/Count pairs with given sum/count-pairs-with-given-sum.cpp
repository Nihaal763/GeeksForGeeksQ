class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Code here
        int N = arr.size();
        unordered_map<int,int> freq;
        int count =0;
        for(int i=0;i<N;++i)
        {
            if(freq.find(target-arr[i])!=freq.end())
            {
               count+=freq[target-arr[i]];
            }
            ++freq[arr[i]];
        }
        return count;
    }
};