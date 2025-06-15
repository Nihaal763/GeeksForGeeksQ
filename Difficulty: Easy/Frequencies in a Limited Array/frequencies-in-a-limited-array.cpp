class Solution {
  public:
    vector<int> frequencyCount(vector<int>& arr)
    {
        int N =arr.size();
        for(int i=0;i<N;++i)
        {
            if(arr[i]>N) 
            {
                arr[i] = 0;
            }
        }
        

       
        for(int i=0;i<N;++i)
        {
            int index=(arr[i]%(N+1)) - 1;
            if (index>=0)
            {
                arr[index]+=(N + 1);
            }
        }

        for (int i=0;i<N;++i) 
        {
            arr[i]=arr[i]/(N+1);
        }

        return arr;
    }
};
