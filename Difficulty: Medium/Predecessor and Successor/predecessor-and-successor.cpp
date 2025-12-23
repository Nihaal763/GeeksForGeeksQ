/* BST Node
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    vector<Node*> in;
    vector<Node*> ans;

    vector<Node*> findPreSuc(Node* root, int key) {
        in.clear();
        ans.assign(2, nullptr);

        inorder(root);

        int N = in.size();
        int index = -1;

        // Find key position
        for(int i = 0; i < N; i++){
            if(in[i]->data == key){
                index = i;
                break;
            }
        }

        // If key exists in BST
        if(index != -1){
            if(index > 0)
                ans[0] = in[index - 1];   // predecessor
            if(index < N - 1)
                ans[1] = in[index + 1];   // successor
        }
        // If key does NOT exist
        else{
            for(int i = 0; i < N; i++){
                if(in[i]->data < key)
                    ans[0] = in[i];
                else if(in[i]->data > key){
                    ans[1] = in[i];
                    break;
                }
            }
        }

        return ans;
    }

    void inorder(Node* root){
        if(root == nullptr) return;
        inorder(root->left);
        in.push_back(root);
        inorder(root->right);
    }
};
