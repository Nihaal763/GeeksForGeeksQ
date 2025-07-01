class Solution {
  public:
    int digitsSlten(int a)
    {
        if(a==0)
        {
            return 0;
        }
        a=(digitsSlten(a/10)+(a%10));
        if(a>9)
        {
            a=digitsSlten(a);
        }
        return a;
    }
    int digitalRoot(int n)
    {
        // code here
        if(n<10)
        {
            return n;
        }
        int b = digitsSlten(n);
        return b;
    }
};