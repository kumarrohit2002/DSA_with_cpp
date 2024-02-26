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
	if(root==NULL){
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
	if(root==NULL) return;
	inorder(root->left,v);
	v.push_back(root->data);
	inorder(root->right,v);
}

void creatAVL(Node* &root,vector<int> &v,int f,int l){
	if(f>=l) return;
	int mid=(f+l)/2;
	root=insertNode(root,v[mid]);
	creatAVL(root,v,f,mid);
	creatAVL(root,v,mid+1,l);
	return;
}

void preorder(Node* root){
	if(root==NULL) return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
	return;
}

int main(){
	int n;
	cin>>n;
	int data;
	BST b;
	for(int i=0;i<n;i++){
		cin>>data;
		b.root=insertNode(b.root,data);
	}
	vector<int> v;
	inorder(b.root,v);
	int m=v.size();
//	for(int i=0;i<m;i++){
//		cout<<v[i]<<" ";
//	}
	BST a;
	creatAVL(a.root,v,0,m);
	preorder(a.root);
	return 0;
}
