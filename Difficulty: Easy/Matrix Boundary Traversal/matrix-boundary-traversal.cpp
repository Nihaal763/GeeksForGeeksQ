
class Solution {
  public:
    vector<int> boundaryTraversal(vector<vector<int> >& mat) {
       int N =mat.size();
       vector<int> ans;
       
       int i=0,j=0;
       for(int l=1;l<N;++l)
       {
           ans.push_back(mat[i][j]);
           ++j;
       }
       for(int l=1;l<N;++l)
       {
           ans.push_back(mat[i][j]);
           ++i;
       }
       for(int l=1;l<N;++l)
       {
           ans.push_back(mat[i][j]);
           --j;
       }
       for(int l=1;l<N;++l)
       {
           ans.push_back(mat[i][j]);
           --i;
       }
        
        return ans;
    }
};
