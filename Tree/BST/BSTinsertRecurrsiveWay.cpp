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

Node* insertBST(Node* root,int v){
    if(root==NULL){
        Node* newNode=new Node(v);
        return newNode;
    }
    if(root->value > v){
        root->left=insertBST(root->left ,v);
    }
    else{
        root->right=insertBST(root->right,v);
    }
    return root;
};

bool searchBST(Node* root,int key){
    if(root==NULL) return false;
    if(root->value==key) return true;
    if(root->value > key) return searchBST(root->left,key);
    else if(root->value < key ) return searchBST(root->right,key);
}

void inorderTraversal(Node* root){
    if(root==NULL) return;
    cout<<root->value<<" ";
    inorderTraversal(root->left);
    inorderTraversal(root->right);
}

bool isfull(Node* root){
    if(!root) return true;
    if(root->left==NULL && root->right==NULL) return true;
    if(root->left && root->right)
    return isfull(root->left) && isfull(root->right);
    return false;
}

int main(){
    BST b; 
    b.root=insertBST(b.root,2);
    insertBST(b.root,1);
    insertBST(b.root,0);
    insertBST(b.root,5);
    inorderTraversal(b.root);
    cout<<endl;
    // cout<<searchBST(b.root,2);
    // cout<<endl;
    // inorderTraversal(b.root);
    cout<<endl<<"Isfull: "<<isfull(b.root);
    return 0;
}