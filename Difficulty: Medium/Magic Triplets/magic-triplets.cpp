//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int countTriplets(vector<int> nums) {
            int count =0;
            int n = nums.size();
            int tc = 0;
            for(int i=0;i<n;++i)
            {
                int lc=0,rc=0;
                for(int j=0;j<i;++j)
                {
                    if(nums[i]>nums[j])
                    {
                        ++lc;
                    }
                }
                for(int j = i+1;j<n;++j)
                {
                    if(nums[j]>nums[i])
                    {
                        ++rc;
                    }
                }
                tc=tc+(lc*rc);
            }
            return tc;
    }
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		int ans = ob.countTriplets(nums);
		cout << ans << "\n";
	
cout << "~" << "\n";
}  
	return 0;
}
// } Driver Code Ends