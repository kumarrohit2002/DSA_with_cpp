#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* left;
    Node* right;
    Node(int d){
        value=d;
        this->left=NULL;
        this->right=NULL;
    }
};

class BST{
    public:
    Node* root;
        BST(){
            root=NULL;
        }
};

Node* insertNode (Node* root,int v){
    if(root==NULL){
        Node* newNode=new Node(v);
        return newNode;
    }
    if(root->value > v){
        root->left=insertNode(root->left,v);
    }
    if(root->value < v){
        root->right=insertNode(root->right,v);
    }
    return root;
}

int countLeafNode(Node* root){
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL){
        return 1;
    }
    return countLeafNode(root->left)+countLeafNode(root->right);
}

void inordetTrivarsal(Node* root){
    // code here
    if(root==NULL) return;
    cout<<root->value<<" ";
    inordetTrivarsal(root->left);
    inordetTrivarsal(root->right);
}

int main(){
    BST b;
    b.root=insertNode(b.root,5);
    insertNode(b.root,4);
    insertNode(b.root,7);
    insertNode(b.root,8);
    insertNode(b.root,3);
    insertNode(b.root,6);
    inordetTrivarsal(b.root);
    cout<<endl<<countLeafNode(b.root);
    return 0;
}