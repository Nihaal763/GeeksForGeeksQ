class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        // code here
        int N = arr.size();
        for(int i=0;i<N;++i)
        {
            int mini=i;
            for(int j=i;j<N;++j)
            {
                if(arr[mini]>arr[j])
                {
                    mini=j;
                }
            }
            int temp = arr[mini];
            arr[mini] = arr[i];
            arr[i] = temp;
        }
    }
};