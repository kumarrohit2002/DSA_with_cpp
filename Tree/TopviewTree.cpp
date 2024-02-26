#include<iostream>
#include<vector>
#include<queue>
#include<map>
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

vector<int> topview(Node* &root){
	vector<int> v;
	if(!root) return v;
	queue<pair<Node*,int>> q;
	q.push(make_pair(root,0));
	map<int,int> m;
	while(!q.empty()){
		int currlevel=q.size();
		while(currlevel--){
			pair<Node*,int> p=q.front();
			
			Node* currNode=p.first;
			int currcolumn=p.second;
			q.pop();
			if(m.find(currcolumn)==m.end()){
				m[currcolumn]=currNode->value;
				if(currNode->left){
					q.push(make_pair(currNode->left,currcolumn-1));
				}
				if(currNode->right){
					q.push(make_pair(currNode->right,currcolumn+1));
				}
			}
			
			}
			
		}
		for(auto it:m){
			v.push_back(it.second);
	}
	return v;
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
	vector<int> ans=topview(root);
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}