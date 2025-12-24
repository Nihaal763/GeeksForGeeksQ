class Solution {
  public:

    int height(Node * root){
        if(root == nullptr) return 0;
        return root->height;
    }

    Node* leftRotate(Node * root){
        Node *y = root->right;
        Node *T2 = y->left;              // ✅ added

        y->left = root;                  // ✅ fixed
        root->right = T2;                // ✅ fixed

        root->height = max(height(root->left), height(root->right)) + 1;  // ✅ fixed
        y->height = max(height(y->left), height(y->right)) + 1;            // ✅ fixed

        return y;
    }

    Node * rightRotate(Node* root){
        Node *y = root->left;
        Node *T2 = y->right;             // ✅ added

        y->right = root;                 // ✅ fixed
        root->left = T2;                 // ✅ fixed

        root->height = max(height(root->left), height(root->right)) + 1; 
        y->height = max(height(y->left), height(y->right)) + 1;            

        return y;
    }

    int hdiff(Node* root){
        return height(root->left) - height(root->right);
    }

    bool isBalanced(Node* root){
        return abs(hdiff(root)) <= 1;    
    }

    Node* balance(Node* root){
        if(hdiff(root) == -2){
            Node * y = root->right;
            if(hdiff(y) == 1){
                root->right = rightRotate(y);
                return leftRotate(root);
            }else{
                return leftRotate(root);
            }
        }
        else if(hdiff(root) == 2){
            Node *y = root->left;
            if(hdiff(y) == -1){
                root->left = leftRotate(y);
                return rightRotate(root);
            }else{
                return rightRotate(root);
            }
        }
        return root;
    }
   Node* insertToAVL(Node* node, int data) {

    if(node == nullptr){
        Node *nn = new Node(data);   // ✅ FIX HERE
        nn->left = nn->right = nullptr;
        nn->height = 1;
        return nn;
    }

    if(node->data >= data){
        node->left = insertToAVL(node->left, data);
    }else{
        node->right = insertToAVL(node->right, data);
    }

    node->height = max(height(node->left), height(node->right)) + 1;

    if(!isBalanced(node)){
        return balance(node);
    }

    return node;
  }

};
