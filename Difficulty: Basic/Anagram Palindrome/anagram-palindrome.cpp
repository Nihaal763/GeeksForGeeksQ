int isPossible(string S) {
    // your code here
      unordered_map<char,int> freq;
        int N = S.length();
        for(int i=0;i<N;++i)
        {
            ++freq[S[i]];
        }
        int count=0;
        for(auto it:freq)
        {
            if((it.second)%2!=0)
            {
                ++count;
            }
        }
        if(count<=1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
}