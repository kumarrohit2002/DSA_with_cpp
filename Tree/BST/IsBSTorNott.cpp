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


// check is BSt or Not.......
// Approch 1................
// void inordertrivrsal(Node* root,vector<int> &v){
//     if(!root) return;
//     inordertrivrsal(root->left,v);
//     v.push_back(root->data);
//     inordertrivrsal(root->right,v);
//     return;
// }

// bool isSorted(vector<int> v,int n){
//     if(n==1 || n==0) return true;
//     if(v[n-1] < v[n-2]) return false;
//     return isSorted(v,n-1);
// }


// check is BSt or Not.......
//approch 2...
bool help(Node* root,int min,int max){
    //base case
    if(!root) return true;
    if(min < root->data && max >root->data){
        bool left=help(root->left,min,root->data);
        bool right=help(root->right,root->data,max);
        return left && right;
    }
    return false;
}

bool isBST(Node* root){
    return help(root,INT16_MIN,INT16_MAX);
}
int main(){
    BST b;
    b.root=insertNode(b.root,4);
    insertNode(b.root,1);
    insertNode(b.root,3);
    insertNode(b.root,5);
    //check IS Bst or Not
    //approch 1..........
    // vector<int> v;
    // inordertrivrsal(b.root,v);
    // if(isSorted(v,v.size())){
    //     cout<<"Bst";
    // }


    //approch 2........
    cout<<isBST(b.root);
    return 0;
}