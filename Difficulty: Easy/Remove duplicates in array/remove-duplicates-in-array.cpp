class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        // code here
        int N = arr.size();
        unordered_set<int> ans;
        vector<int>ans1;
        for(int i=0;i<N;++i)
        {
            if(ans.find(arr[i])==ans.end())
            {
                ans.insert(arr[i]);
                ans1.push_back(arr[i]);
            }
        }
        return ans1;
    }
};