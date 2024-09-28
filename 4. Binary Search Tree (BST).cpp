#include <iostream>
using namespace std;

class BSTNode {
public:
    int data;
    BSTNode* left;
    BSTNode* right;
    BSTNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

class BST {
private:
    BSTNode* root;

public:
    BST() : root(nullptr) {}

    void insert(int val) {
        root = insertNode(root, val);
    }

    BSTNode* insertNode(BSTNode* node, int val) {
        if (!node) return new BSTNode(val);
        if (val < node->data) node->left = insertNode(node->left, val);
        else node->right = insertNode(node->right, val);
        return node;
    }

    void inorderTraversal() {
        inorder(root);
    }

    void inorder(BSTNode* node) {
        if (!node) return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }
};

