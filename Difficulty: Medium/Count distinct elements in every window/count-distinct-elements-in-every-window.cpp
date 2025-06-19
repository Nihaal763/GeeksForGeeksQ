class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here.
        int N = arr.size();
        unordered_map<int,int> freq;
        vector<int> ans;
        for(int i=0;i<k;++i)
        {
            ++freq[arr[i]];
        }
        ans.push_back(freq.size());
        int s=1,e=k;
        while(e<N)
        {
            --freq[arr[s-1]];
            if(freq[arr[s-1]]==0)
            {
                freq.erase(arr[s-1]);
            }
            ++freq[arr[e]];
            ans.push_back(freq.size());
            ++s;
            ++e;
        }
        return ans;
    }
};