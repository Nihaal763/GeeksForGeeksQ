class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) {
        int x=0;
        int N=arr.size();

        for(int i=0;i<N;++i)
        {
            x^=arr[i];
        }
        
       
        int index=0;
        for(int i=0;i<32;++i) 
        {
            if((x>>i)&1) 
            {
                index = i;
                break;
            }
        }
        
        int num1 = 0, num2 = 0;
        
       
        for(int i=0;i<N;++i)
        {
            if((arr[i]>>index)&1)
            {
                num1^=arr[i];
            }
            else
            {
                num2^=arr[i];
            }
        }
        
        vector<int>ans;
        if (num1<num2)
        {
            ans.push_back(num1);
            ans.push_back(num2);
        } 
        else
        {
            ans.push_back(num2);
            ans.push_back(num1);
        }
        
        return ans;
    }
};
