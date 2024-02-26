#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		// constructor
		Node(int data){
			this->data=data;
			this->next=NULL;
		}
		~Node(){
			int value=this->data;
			if(this->next!=NULL){
				delete next;
				this->next=NULL;
			}
			cout<<"deleted value: "<<value<<endl;
		}
};

void insertNode(Node* &tail,int ele,int d){
	//empty list
	if(tail==NULL){
		Node* newNode=new Node(d);
		tail=newNode;
		newNode->next=newNode;
	}
	else{
		//non empty list
		//assumong that the element is present in the list
		Node* curr=tail;
		while(curr->data!=ele){
			curr=curr->next;
		}
		//element found -> curr is representing element wala node
		Node* temp=new Node(d);
		temp->next=curr->next;
		curr->next=temp;
	}
}

void deleteNode(Node* &tail,int ele){
	//empty list
	if(tail==NULL){
		cout<<"list is empty, please check again"<<endl;
	}
	else{
		//non empty wala case
		//assuming that "value" is not presentin linked list
		Node* prev=tail;
		Node* curr=prev->next;
		while(curr->data!=ele){
			prev=curr;
			curr=curr->next;
		}
		prev->next=curr->next;
		//delete
		
		//for 1 node linked list
		if(curr==prev){
			tail=NULL;
		}
		
		//for >=2 node linked list
		if(tail==curr){
			tail=prev;
		}
		curr->next=NULL;
		delete curr;
	}
}

void print(Node* tail){
	if(tail==NULL){
		cout<<"Linked list is empty";
	}
	else{
	Node* temp=tail;
	do{
		cout<<tail->data<<" ";
		tail=tail->next;
	}
	while(temp!=tail);
	}
	cout<<endl;
}

int main(){
	Node* tail=NULL;
	deleteNode(tail,7);
	//empty list me insert krre hai
	insertNode(tail,5,3);
	print(tail);
	insertNode(tail,3,5);
	insertNode(tail,5,7);
	print(tail);
	deleteNode(tail,7);
	print(tail);
	return 0;
}
