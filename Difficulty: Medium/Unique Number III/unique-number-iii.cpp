// User function Template for C++

class Solution {
  public:
    int getSingle(vector<int> &arr) {
        // code here
        int unq = 0;
        int N = arr.size();
        for(int i=0;i<32;++i)
        {
           int count = 0;
           for(int j=0;j<N;++j)
           {
              if(((arr[j]>>i)&1)==1)
              {
                  ++count;
              }
           }
           
           if(count%3!=0)
           {
               unq|=1<<i;
           }
        }
        return unq;
    }
};