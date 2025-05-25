
class Solution {
  public:
    int squaresInMatrix(int m, int n) {
        int res = 0;
        int min;
        
        if(m < n){
            min = m;
        } 
        else{
            min = n;
        }

        for(int i=1; i <= min; ++i){
            res+=(m-i+1)*(n-i+1);
        }

        return res;
    }
};