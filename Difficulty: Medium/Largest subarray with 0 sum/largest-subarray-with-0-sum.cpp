/*You are required to complete this function*/

class Solution {
  public:
    int maxLen(vector<int>& arr) 
    {
        // code here
        int N = arr.size();
        long sum =0;
        vector<long> pf(N,0);
        for(int i=0;i<N;++i)
        {
            sum+=arr[i];
            pf[i]=sum;
        }
        unordered_map<long,int> hm;
        hm.insert({0,-1});
        int ans=0;
        for(int i=0;i<N;++i)
        {
            if(hm.find(pf[i])==hm.end())
            {
                hm.insert({pf[i],i});
            }
            else
            {
                int l=i-hm[pf[i]];
                ans=max(l,ans);//Everytime the ans is going to get updated
            }
        }
        return ans;
    }
};