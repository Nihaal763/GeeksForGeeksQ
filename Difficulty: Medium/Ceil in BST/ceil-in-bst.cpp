class Solution {
  public:
    int findCeil(Node* root, int x) {
        // code here
        int ceil = -1;
        if(root == nullptr){
            return -1;
        }
        while(root!=nullptr){
            if(root->data == x){
                return x;
            }else if(root->data>x){
                ceil = root->data;
                root = root->left;
            }else{
                root = root->right;
            }
        }
        return ceil;
    }
};
