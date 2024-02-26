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


Node* insertBST(Node* root,int v){     //recurrsive way......
    if(root==NULL){
        Node* newNode=new Node(v);
        return newNode;
    }
    if(root->value > v){
        root->left=insertBST(root->left,v);
    }
    else{
        root->right=insertBST(root->right,v);
    }
    return root;
}

bool searchBST(Node* root,int key){
    if (root == NULL) return false;
    if(root->value==key) return true;
    if(root->value > key) return searchBST(root->left,key);
    if(root->value < key) return searchBST(root->right,key);
}

void inorderprint(Node* root){
    if(root==NULL) return;
    cout<<root->value<<" ";
    inorderprint(root->left);
    inorderprint(root->right);
}



int main(){
    BST bst1;
    bst1.root=insertBST(bst1.root,4);
    insertBST(bst1.root,2);
    insertBST(bst1.root,7);
    insertBST(bst1.root,9);
    insertBST(bst1.root,3);
    inorderprint(bst1.root);
    cout<<endl;
    cout<<searchBST(bst1.root,9);
    return 0;
}

//     4
//  2     7
//   3      9