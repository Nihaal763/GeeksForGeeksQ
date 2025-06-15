class Solution {
  public:
    int computeGCD(int a,int b)
    {
        if(b==0)
        {
            return a;
        }
        return computeGCD(b, a % b);
    }

   
    int gcd(int n,vector<int> arr) {
        int result=arr[0];
        for (int i=1;i<n;++i) {
            result = computeGCD(result, arr[i]);

            if (result == 1)
                return 1;
        }
        return result;
    }
};
