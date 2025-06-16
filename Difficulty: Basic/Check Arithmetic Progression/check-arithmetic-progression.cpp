class Solution {
  public:
    bool checkIsAP(vector<int> &arr)
    {
        int N =arr.size();
        unordered_map<int,bool>elements;
        int minval=arr[0],maxval=arr[0];
        for(int i=0;i<N;++i)
        {
            //Use of min functions and max functions
            minval=min(minval,arr[i]);
            maxval=max(maxval,arr[i]);
            elements[arr[i]]=true;
        }
        
        if(((maxval-minval)%(N-1))!=0)
        {
            return false;
        }
        int d = (maxval-minval)/(N-1);
        for(int i=0;i<N;++i)
        {
            int expectedterm = minval+(i*d);
            if(elements.find(expectedterm)==elements.end())
            {
                return false;
            }
        }
        return true;
        
    }
};