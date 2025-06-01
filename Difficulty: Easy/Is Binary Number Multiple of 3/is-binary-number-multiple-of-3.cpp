// User function template for C++
class Solution {
  public:
    bool isDivisible(string& s) {
        // code here
        int N = s.length();
       long long int ans =0;
        for(int i=0;i<N;++i)
        {
            ans = (ans * 2 + (s[i])) % 3;
        }
       if(ans%3==0)
       {
           return true;
       }
       else
       {
           return false;
       }
    }
};