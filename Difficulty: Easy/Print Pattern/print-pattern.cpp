class Solution {
  public:
   int pat(int a)
   {
       return (a-5);
   }
  
    vector<int> pattern(int n)
    {
        // code here
        vector<int> ans;
        int b =n;
        while(b>0)
        {
            ans.push_back(b);
            b=pat(b); 
        }
        
        ans.push_back(b);
        int N = ans.size();
        for(int i=N-2;i>=0;--i)
        {
            ans.push_back(ans[i]);
        }
        return ans;
    }
};