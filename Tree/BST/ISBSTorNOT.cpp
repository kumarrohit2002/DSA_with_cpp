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

Node* insertNodeInBST(Node* root,int v){
    if(root==NULL){
        Node* temp=new Node(v);
        return temp;
    }
    if(root->value > v){
        root->left=insertNodeInBST(root->left,v);
    }
    if(root->value < v){
        root->right=insertNodeInBST(root->right,v);
    }
    return root;
}


// bool ishelp(Node* root,int min,int max){
//     if(!root)return true;
//     if(root->value < min || root->value > max){
//         return false;
//     }
//     return ishelp(root->left,min,root->value) && ishelp(root->right,root->value,max);
// }

// bool isBST(Node* root){
//     return ishelp(root,INT16_MIN,INT16_MAX);
// }


bool ishelp(Node* root,Node* &prev){
    if(root==NULL) return true;
    if(!ishelp(root->left,prev)) return false;
    if(prev!=NULL && root->value <= prev->value)  return false;
    prev=root;
    return ishelp(root->right,prev);
}

bool isBST(Node* root){
    Node* prev=NULL;
    return ishelp(root,prev);
}

int main(){
    BST b;
    b.root=insertNodeInBST(b.root,5);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        insertNodeInBST(b.root,a);
    }
    cout<<"Is BST: "<<isBST(b.root);
    return 0;
}