//Back-end complete function template in C++

class Solution {

  public:
    // Function to get the index of an element in a sorted array.
    int getIndexInSortedArray(vector<int>& arr, int k) {
        // Write Code Here
        int N = arr.size();
        int a = arr[k];
        int count = 0;
        for(int i=0;i<N;++i)
        {
            if(arr[i]<a)
            {
                ++count;
            }
            if(arr[i]==a && i<k)
            {
                ++count;
            }
        }
        k = count;
        return k;
    }
};