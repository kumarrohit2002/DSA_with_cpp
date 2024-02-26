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

int levelOfTree(Node* &root){
    if(!root) return 0;
    int left=levelOfTree(root->left);
    int right=levelOfTree(root->right);
    return ((left,right)+1);
}

int main(){
    Node* root=new Node(2);
    root->left=new Node(4);
    root->right=new Node(6);
    cout<<levelOfTree(root);
    return 0;
}