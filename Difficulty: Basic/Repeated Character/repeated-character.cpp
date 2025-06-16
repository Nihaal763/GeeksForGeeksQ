class Solution {
  public:
    char firstRep(string s) {
        // code here.
        int N =s.length();
        unordered_map<int,int> freq;
        for(int i=0;i<N;++i)
        {
            ++freq[s[i]];
        }
        
        for(int i=0;i<N;++i)
        {
            if(freq[s[i]]>=2)
            {
                return s[i];
            }
        }
        return '#';
    }
};