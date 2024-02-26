#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
		Node* prev;
		Node(int data){
			this->data=data;
			this->next=NULL;
			this->prev=NULL;
		}
};
void insertAtHead(Node* &head,int d){
	Node* temp=new Node(d);
	temp->next=head;
	head->prev=temp;
	head=temp;
}
void insertAtTail(Node* &tail,int d){
	Node* temp=new Node(d);
	tail->next=temp;
	temp->prev=tail;
	tail=temp;
}

void insertAtPosition(Node* &head,Node* &tail,int p,int d){
	if(p==1){
		insertAtHead(head,d);
		return;
	}
	Node* temp=head;
	int c=1;
	while(c<p-1){
		temp=temp->next;
		c++;
	}
	if(temp->next==NULL){
		insertAtTail(tail,d);
		return;
	}
	Node* nodetoinsert=new Node(d);
	nodetoinsert->next=temp->next;
	temp->next->prev=nodetoinsert;
	temp->next=nodetoinsert;
	nodetoinsert->prev=temp;
}
void print(Node* head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

int main(){
	Node* node1=new Node(2);
	Node* head=node1;
	Node* tail=node1;
	insertAtHead(head,4);
	insertAtTail(tail,6);
	print(head);
	insertAtPosition(head,tail,2,8);
	print(head);
	cout<<"head: "<<head->data<<endl;
	cout<<"Tail: "<<tail->data<<endl;
	return 0;
}
