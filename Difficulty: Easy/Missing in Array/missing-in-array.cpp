class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int N =arr.size();
        long long asum = (1LL*(N+1)*(N+2))/2;
        long long sum =0;
        for(int i=0;i<N;++i)
        {
            sum+=arr[i];
        }
        return asum-sum;
    }
};