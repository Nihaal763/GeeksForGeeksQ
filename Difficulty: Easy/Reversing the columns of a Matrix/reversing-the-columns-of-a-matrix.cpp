class Solution {
  public:
    // Function to reverse the columns of a matrix.
    void reverseCol(vector<vector<int> > &matrix) {
        // code here
        int N =matrix.size();
        int M =matrix[0].size();
        
        for(int i=0;i<N;++i)
        {
            int s=0,e=M-1;
            while(s<e)
            {
                int temp = matrix[i][s];
                matrix[i][s] = matrix[i][e];
                matrix[i][e] = temp;
                s++,e--;
            }
        }
    }
};