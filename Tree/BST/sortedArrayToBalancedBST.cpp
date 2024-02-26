#include<iostream>
#include<vector>
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
    Node *root=NULL;
    BST(){
        this->root=NULL;
    }
};

// Node* insertNodeBST(Node* root,int v){
//     if(root==NULL){
//         Node* newNode=new Node(v);
//         return newNode;
//     }
//     if(root->value > v){
//         root->left = insertNodeBST(root->left ,v);
//     }
//     else if(root->value < v){
//         root->right=insertNodeBST(root->right,v);
//     }
//     return root;
// }

Node* sortedToBST(vector<int> v,int  start,int end){
    if(start>end) return NULL;
    int mid=(start+end)/2;
    Node* root=new Node(v[mid]);
    root->left=sortedToBST(v,start,mid-1);
    root->right=sortedToBST(v,mid+1,end);
    return root;
}

void preorderTrivarsal(Node* root){
    if(root==NULL) return;
    cout<<root->value<<" ";
    preorderTrivarsal(root->left);
    preorderTrivarsal(root->right);
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    BST b;
    b.root=sortedToBST(v,0,n-1);
    preorderTrivarsal(b.root);
    return 0;
}