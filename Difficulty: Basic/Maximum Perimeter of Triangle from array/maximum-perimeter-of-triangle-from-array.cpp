class Solution {
  public:
    int maxPerimeter(vector<int> &arr) {
        // code here.
          int N = arr.size();
          int act_sum;
          sort(arr.begin(),arr.end(),greater<int>());
          for(int i=0;i<N-2;++i)
          {
              if(arr[i+1]+arr[i+2]>arr[i])
              {
                  return arr[i]+arr[i+1]+arr[i+2];
              }
          }
          return -1;
    }
};