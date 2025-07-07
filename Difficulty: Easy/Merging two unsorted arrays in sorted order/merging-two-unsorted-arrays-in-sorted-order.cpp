// Your code goes hereclass Solution{

class Solution {
  public:
    void sortedMerge(vector<int>& arr1, vector<int>& arr2, vector<int>& res) {
        // Your code goes here
        int N = arr1.size();
        int M = arr2.size();
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        int min1 = 0,min2 = 0,i = 0;
        
        while(min1<N && min2<M)
        {
            if(arr1[min1]<arr2[min2])
            {
                res[i] = arr1[min1];
                ++i;
                ++min1;
            }
            else
            {
                res[i] = arr2[min2];
                ++i;
                ++min2;
            }
        }
        while(min1<N)
        {
            res[i] = arr1[min1];
            ++i;
            ++min1;
        }
        while(min2<M)
        {
            res[i] = arr2[min2];
            ++i;
            ++min2;
        }
    }
};
