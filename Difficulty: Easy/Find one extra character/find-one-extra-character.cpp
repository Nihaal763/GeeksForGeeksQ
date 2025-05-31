// User function Template for C++

char extraChar(string &s1, string &s2) {

    // code here
    int ans = 0;
    int N1 = s1.length();
    int N2 = s2.length();
    for(int i=0;i<N1;++i)
    {
        ans^=s1[i];
    }
    for(int i=0;i<N2;++i)
    {
        ans^=s2[i];
    }
    return ans;
}