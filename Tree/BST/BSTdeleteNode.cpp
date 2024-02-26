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

Node* largestNodeBST(Node* root){
    Node* curr=root;
    while(curr && curr->right!=NULL){
        curr=curr->right;
    }
    return curr;
}

Node* deleteBST(Node* root,int key){
    if(root==NULL) return root;
    if(root->value > key){
        root->left=deleteBST(root->left,key);
    }
    else if(root->value < key){
        root->right=deleteBST(root->right,key);
    }
    else{
        // root is the node to be deleted
        if(!root->left && !root->right){
            free(root);
            return NULL;
        }
        else if(!root->right){
            Node* newNode=root->right;
            free(root);
            return newNode;
        }
        else if(!root->left){
            Node* newNode=root->left;
            free(root);
            return newNode;
        }
        else{
            Node* justSmallerNode=largestNodeBST(root->left);
            root->value=justSmallerNode->value;
            root->left=deleteBST(root->left,justSmallerNode->value);
        }
    }
    return root;
}

void inorderTraversal(Node* root){
    if(root==NULL) return;
    cout<<root->value<<" ";
    inorderTraversal(root->left);
    inorderTraversal(root->right);
}

int main(){
    BST b;
    b.root=insertBST(b.root,2);
    insertBST(b.root,4);
    insertBST(b.root,1);
    insertBST(b.root,5);
    inorderTraversal(b.root);
    cout<<endl;
    // cout<<searchBST(b.root,2);
    cout<<endl;
    b.root=deleteBST(b.root,5);
    inorderTraversal(b.root);
    return 0;
}