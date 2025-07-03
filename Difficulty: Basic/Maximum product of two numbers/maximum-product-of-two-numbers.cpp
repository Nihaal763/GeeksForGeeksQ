// User function template for C++
class Solution {
  public:

    int maxProduct(vector<int>& arr) {
        // code here
        int N = arr.size();
        for(int i=0;i<2;++i)
        {
            for(int j=0;j<N-i-1;++j)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        int product = arr[N-1]*arr[N-2];
        return product;
    }
};