class Solution {
  public:
    void printGfg(int N) {
        // Code here
        if(N==0)
        {
            return ;
        }
        cout<<"GFG";
        cout<<" ";
        printGfg(N-1);
    }
};
