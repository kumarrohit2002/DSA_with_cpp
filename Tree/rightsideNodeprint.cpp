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

void rightleaf(Node* &root){
    if(!root) return;
    cout<<root->value<<" ";   // this code is worng...........
    rightleaf(root->right);
    return;
}

int main(){
    Node* root=new Node(2);
    root->left = new Node(4);
    root->right=new Node(6);
    root->left->left=new Node(8);
    root->left->right=new Node(10);
    root->right->right=new Node(12);
    root->right->left=new Node(14);
    rightleaf(root);
    return 0;
}