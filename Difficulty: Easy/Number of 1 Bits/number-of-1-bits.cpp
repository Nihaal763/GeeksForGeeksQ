class Solution {
  public:
    int setBits(int n) {
        // Write Your Code here
        int count =0;
        for(int i=0;i<=log2(n);++i)
        {
            if(((n>>i)&1)==1)
            {
                ++count;
            }
        }
        return count;
    }
};