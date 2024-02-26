#include<iostream>
#include<queue>
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


 void levelorder(Node* &root){
	if(!root) return;
	queue<Node*> q;
	q.push(root);
	while(!q.empty()){
		int currlevel=q.size();
		while(currlevel--){
			Node* currNode=q.front();
			q.pop();
			if(currNode->left){
				q.push(currNode->left);
			}
			if(currNode->right){
				q.push(currNode->right);
			}
			cout<<currNode->value<<" ";
		}
	}
}


int main(){
	Node* root=new Node(2);
	root->left=new Node(4);
	root->right=new Node(6);
	root->left->left=new Node(8);
	root->left->right=new Node(10);
	root->right->right=new Node(14);
	root->right->left=new Node(16);
	root->left->left->right=new Node(12);
	levelorder(root);
	return 0;
}
