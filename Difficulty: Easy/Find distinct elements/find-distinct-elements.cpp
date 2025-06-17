// User function Template for C++
int distinct(vector<int>& arr) {
    // Your code here
    int N =arr.size();
    unordered_set<int> freq;
    for(int i=0;i<N;++i)
    {
        if(freq.find(arr[i]) == freq.end())
        {
            freq.insert(arr[i]);
        }
    }
    int M = freq.size();
    return M;
}