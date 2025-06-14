#include<iostream>
#include<vector>
using namespace std;
class Node{
public:
    Node* parent=NULL;
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
       this->left=NULL;
       this->right=NULL;
    }
};
Node* insert(Node* root,int x){
   if (root == nullptr) {
       
        return new Node(x);
    }

    if (x <root->data) {
        root->left = insert(root->left, x);
    } else {
        root->right = insert(root->right, x); 
    }

    return root;
}

void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main(){
    Node* root=NULL;
        
    root=insert(root,10);
    root=insert(root,40);
    root=insert(root,421);
    root=insert(root,65);
    root=insert(root,5);
    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;


    return 0;

}