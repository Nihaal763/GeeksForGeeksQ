/*
class Node{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> ans;
    Node *flattenBST(Node *root) {
        // code here
        inorder(root);
        Node * nn = new Node(ans[0]);
        root = nn;
        for(int i=1;i<ans.size();++i){
            Node* nn1 = new Node(ans[i]);
            nn->right = nn1;
            nn = nn->right;
        }
        return root; 
    }
    void inorder(Node* root){
        if(root == nullptr)return;
        inorder(root->left);
        ans.push_back(root->data);
        inorder(root->right);
    }
};