class Solution {
  public:
    int getCount(vector<int> &arr, int num1, int num2) {
        // Your code goes here.
        unordered_map<int,int>freq;
        int N = arr.size();
        int count =0;
        int a=INT_MAX,b=INT_MIN;
        for(int i=0;i<N;++i)
        {
            if(arr[i]==num1)
            {
                a=min(a,i);
            }
            if(arr[i]==num2)
            {
                b=max(b,i);
            }
           
        }
        for(int i=a+1;i<b;++i)
        {
            ++count;
        }
        return count;
    }
};