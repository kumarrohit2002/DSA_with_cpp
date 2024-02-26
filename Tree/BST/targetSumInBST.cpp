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

bool targetsum(Node* root,int target){
    vector<int> v;
    inorder(root,v);
    int i=0;
    int j=v.size()-1;
    while(i<j){
        int sum=v[i]+v[j];
        if(sum==target) return true;
        if(sum > target) j--;
        else i++;
    }
    return false;

}

int main(){
    BST b;
    b.root=insertNode(b.root,4);
    insertNode(b.root,5);
    insertNode(b.root,3);
    insertNode(b.root,2);
    insertNode(b.root,1);
    int target;
    cin>>target;
    cout<<"is target sum available: "<<targetsum(b.root,target);
    return 0;
}