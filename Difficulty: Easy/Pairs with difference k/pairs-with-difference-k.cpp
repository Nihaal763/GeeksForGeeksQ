// User function template for C++
class Solution {
  public:
    /* Returns count of pairs with difference k  */
    int countPairs(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int> freq;
        int N = arr.size();
        int count=0;
        for(int i=0;i<N;++i)
        {
            if(freq.find(arr[i]-k)!=freq.end())
            {
                count+=freq[arr[i]-k];
            }
            if(freq.find(arr[i]+k)!=freq.end())
            {
                count+=freq[arr[i]+k];
            }
            
            ++freq[arr[i]];
        }
        return count;
    }
};