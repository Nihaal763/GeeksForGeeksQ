/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Function to return a list containing the level order traversal in spiral form.
class Solution {
  public:
    int sum = 0;
    int leafSum(Node* root) {
        // code here
        sum = 0;
        sumP(root);
        return sum;
    }
    void sumP(Node* root){
        if(root == nullptr){
            return;
        }
        if(root->left == nullptr && root->right == nullptr){
            sum+= root->data;
        }
        sumP(root->left);
        sumP(root->right);
    }
};