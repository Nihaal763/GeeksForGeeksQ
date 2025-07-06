class Solution {
  public:
    // Please change the array in-place
    void insertionSort(vector<int>& arr) {
        // code here
        int N = arr.size();
        for(int i=0;i<N-1;++i)
        {
            int j = i+1;
            while(j>0 && arr[j]<arr[j-1])
            {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                --j;
            }
        }
    }
};