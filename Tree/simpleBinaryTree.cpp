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

void preorder(Node* &root){
    if(root==NULL){
        return;
    }
    cout<<root->value<<"  ";
    preorder(root->left);
    preorder(root->right);
    return;
}

void inorder(Node* &root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->value<<"  ";
    inorder(root->right);
    return;
}

void postorder(Node* &root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->value<<"  ";
    return;
}

bool ishelp(Node* root,int min,int max){
    if(!root)return true;
    if(root->value < min || root->value > max){
        return false;
    }
    return ishelp(root->left,min,root->value) && ishelp(root->right,root->value,max);
}

bool isBST(Node* root){
    return ishelp(root,INT16_MIN,INT16_MAX);
}

int main(){
    Node* root=new Node(2);
    root->left = new Node (4);  // 1st level node's children.
    root->right = new Node (10);
    root->left->left=new Node(6); //2nd level
    root->left->right=new Node(5);
    root->right->right=new Node(11);
    cout<<"preorder: ";
    preorder(root);
    cout<<endl<<endl;
    cout<<"inorder: ";
    inorder(root);
    cout<<endl<<endl;
    cout<<"postorder: ";
    postorder(root);
    cout<<endl;
    cout<<"is BST: "<<isBST(root);
    // cout<<"Root :"<<root->value<<endl;
    // cout<<"left child: "<<root->left->value<<endl;
    // cout<<"right child: "<<root->right->value<<endl;
    return 0;
}