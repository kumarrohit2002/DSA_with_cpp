#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* left;
    Node* right;
    Node(int v){
        this->value=v;
        this->left=this->right=NULL;
    }
};

class BST{
    public:
    Node* root;
    BST(){
        this->root=NULL;
    }
};

void insertBST(Node* &root,int v){     //iteretive way
    Node* newNode=new Node(v);
    if(root==NULL){
        root=newNode;
        return;
    }
    Node* curr=root;
    while(true){
        if(curr->value > v){
            if(curr->left==NULL){
                curr->left=newNode;
                return;
            }
            curr=curr->left;
        }
        else{
            if(curr->right==NULL){
                curr->right=newNode;
                return;
            }
            curr=curr->right;
        }
    }
}

void inorderprint(Node* root){
    if(root==NULL) return;
    cout<<root->value<<" ";
    inorderprint(root->left);
    inorderprint(root->right);
}

int main(){
    BST bst1;
    insertBST(bst1.root,4);
    insertBST(bst1.root,2);
    insertBST(bst1.root,7);
    insertBST(bst1.root,9);
    insertBST(bst1.root,3);
    inorderprint(bst1.root);
    return 0;
}

//     4
//  2     7
//   3      9