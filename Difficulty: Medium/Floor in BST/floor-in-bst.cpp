/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int floor(Node* root, int x) {
        // code here
        int f = -1;
        if(root == nullptr){
            return -1;
        }
        while(root!= nullptr){
            if(root->data == x){
                return x;
            }else if(root->data < x){
                f = root->data;
                root = root->right;
            }else{
                root = root->left;
            }
        }
        return f;
        
    }
};