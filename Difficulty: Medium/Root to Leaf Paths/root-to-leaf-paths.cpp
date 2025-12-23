/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<vector<int>>ans;
    vector<vector<int>> Paths(Node* root) {
        // code here
        vector<int>s;
        path(root,s);
        return ans;
    }
    void path(Node* root,vector<int>s){
        if(root == nullptr){
            return;
        }
        s.push_back(root->data);
        if(root->left == nullptr && root->right == nullptr){
            ans.push_back(s);
        }
        path(root->left,s);
        path(root->right,s);
    }
        
};