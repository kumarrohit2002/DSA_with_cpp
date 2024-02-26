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

int leaf(Node* &root){
    if(!root) return 0;
    if(root->left==NULL && root->right==NULL){
        return 1;
    }
    int left=leaf(root->left);
    int right=leaf(root->right);
    return left+right;
}

int main(){
    Node* root=new Node(3);
    root->left=new Node(4);
    root->right=new Node(5);
    root->left->left=new Node(6);
    root->left->right=new Node(8);
    root->right->right=new Node(7);
    root->right->left=new Node(9);
    cout<<leaf(root);
    return 0;
}