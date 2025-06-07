
// fucntion to find bitwise subsets
// Efficient approach
class Solution {
  public:
    vector<int> printSubsets(int n) {
        // Code here
        vector<int> ans;
        for(int i=0;i<=n;++i)
        {
            if((n&i)==i)
            {
                ans.push_back(i);
            }
        }
        int N = ans.size();
        int s=0,e=N-1;
        while(s<e)
        {
            int temp = ans[s];
            ans[s] = ans[e];
            ans[e] = temp;
            ++s,--e;
        }
        
        
        return ans;
    }
};
