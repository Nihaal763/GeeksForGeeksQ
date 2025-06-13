// User function Template for C++

class Solution {
  public:
    vector<int> primeRange(int M, int N) {
        // code here
        vector<int> ans;
        for(int i=M;i<=N;++i)
        {
            if(i==1)
            {
                continue;
            }
           bool isPrime=true;
            for(int j=2;j*j<=i;++j)
            {
                if(i%j==0)
                {
                    isPrime=false;
                    break;
                }
            }
            if (isPrime)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};