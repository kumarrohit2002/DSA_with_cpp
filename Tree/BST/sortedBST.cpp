#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        this->data=d;
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

Node* insertNode(Node* root,int d){
    if(!root){
        Node* temp=new Node(d);
        return temp;
    }
    if(root->data > d){
        root->left=insertNode(root->left,d);
    }
    if(root->data < d){
        root->right=insertNode(root->right,d);
    }
    return root;
}

void inorder(Node* root,vector<int> &v){
    if(!root) return;
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
    return;
}

Node* sortedBST(Node* root1,Node* root2){
    vector<int> v;
    inorder(root1,v);
    int n=v.size();
    root2=insertNode(root2,v[0]);
    for(int i=1;i<n;i++){
        insertNode(root2,v[i]);
    }
    return root2;
}

void preorderPrint(Node* root){
    if(!root) return;
    cout<<root->data<<" ";
    preorderPrint(root->left);
    preorderPrint(root->right);
    return;
}

int main(){
    BST b;
    b.root=insertNode(b.root,4);
    insertNode(b.root,5);
    insertNode(b.root,3);
    insertNode(b.root,2);
    insertNode(b.root,1);
    preorderPrint(b.root);
    cout<<endl;
    BST b1;
    b1.root=sortedBST(b.root,b1.root);
    preorderPrint(b1.root);
    return 0;
}