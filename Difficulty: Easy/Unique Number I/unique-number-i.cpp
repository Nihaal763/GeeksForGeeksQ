class Solution {
  public:
    int findUnique(vector<int> &arr) {
        // code here
        int N = arr.size();
        int ans =0;
        for(int i=0;i<N;++i)
        {
            ans=ans^arr[i];
        }
        return ans;
    }
};