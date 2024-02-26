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

Node* insertBST(Node* &root,int v){
    Node* newNode=new Node(v);
    if(root==NULL){
        return newNode;
    }
    if(root->value > v){
        root->left=insertBST(root->left,v);
    }
    if(root->value < v){
        root->right=insertBST(root->right,v);
    }
    return root;
}

Node* lowestCommonAncestor(Node* root,Node* node1,Node* node2){
    if(root==NULL) return NULL;
    if(root->value > node1->value && root->value > node2->value){
        return lowestCommonAncestor(root->left,node1,node2);
    }
    if(root->value < node1->value && root->value < node2->value){
        return lowestCommonAncestor(root->right,node1,node2);
    }
    return root;
}


void trivarsal(Node* root){
    if(root == NULL)return ;
    cout<<root->value<<" ";
    trivarsal(root->left);
    trivarsal(root->right);
    return;
}

Node* removeLeafNode(Node* root){
    if(root==NULL) return NULL;
    if(root->left==NULL && root->right==NULL){
        free(root);
        return NULL;
    }
    root->left=removeLeafNode(root->left);
    root->right=removeLeafNode(root->right);
}

int main(){
    cout<<endl;
    BST b;
    b.root=insertBST(b.root,6);
    insertBST(b.root,4);
    insertBST(b.root,9);
    insertBST(b.root,3);
    insertBST(b.root,5);
    trivarsal(b.root);
    cout<<endl;
    b.root=removeLeafNode(b.root);
    trivarsal(b.root);
    return 0;
}

    //      6
    //     / 
    //    4   9
    //   / 
    //  3   5