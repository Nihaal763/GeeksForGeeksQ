class Solution {
  public:
    int countBitsFlip(int a, int b) {
        // code here
        int count =0;
        for(int i=0;i<32;++i)
        {
            int c = (a>>i)&1;
            int d = (b>>i)&1;
            if(c!=d)
            {
                ++count;
            }
        }
        return count;
    }
};