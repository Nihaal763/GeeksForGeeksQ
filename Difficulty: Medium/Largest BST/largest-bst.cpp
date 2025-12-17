/* Tree node structure  used in the program

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    int sans = 0;
    int largestBst(Node *root) {
        sans = 0;
        isBST(root);
        return sans;
    }
    vector<int> isBST(Node *root){
        if(root == nullptr){
            vector<int>ans(4,0);
            ans[0] = 1;
            ans[1] = INT_MIN;
            ans[2] = INT_MAX;
            ans[3] = 0;
            return ans;
        }
        vector<int> l = isBST(root->left);
        vector<int> r = isBST(root->right);
        vector<int> ans(4,0);
        if(l[0]==1 && r[0]==1 && root->data>l[1] && root->data<r[2]){
            ans[0] = 1;
        }
        ans[1] = max(max(r[1],l[1]),root->data);
        ans[2] = min(min(r[2],l[2]),root->data);
        ans[3] = l[3]+r[3]+1 ;
        
        if(ans[0] == 1){
            sans = max(sans,ans[3]);
        }
        return ans;
    }
};