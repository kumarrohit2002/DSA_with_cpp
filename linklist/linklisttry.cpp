#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
		Node(int data){
			this ->data=data;
			this ->next=NULL;
		}
};



void insertAtHead(Node* &head,int d){   //  2   3
	Node* temp=new Node(d);
	temp->next=head;
	head=temp;
	
}


void insertAtTail(Node* &tail,int d){
	Node* temp=new Node(d);
	tail->next=temp;
	tail=temp;
}

void insertAtPosition(Node* &head,Node* &tail,int d,int position){
	if(position==1){
		insertAtHead(head,d);
		return;
	}
	Node* temp=head;
	int cnt=1;
	while(cnt<position-1){
		temp=temp->next;
		cnt++;
	}
	
	if(temp->next==NULL){
		insertAtTail(tail,d);
		return;
	}
	Node* nodetoinsert=new Node(d);
	nodetoinsert->next=temp->next;
	temp->next=nodetoinsert;
}


void print(Node* &head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}


int main(){
	Node* node1=new Node(20);
	Node* head=node1;
	Node* tail=node1;
	print(head);
	insertAtHead(head,10);
	print(head);
	insertAtTail(tail,30);
	print(head);
	insertAtPosition(head,tail,50,2);
	print(head);
	cout<<tail->data<<endl;
	cout<<head->data<<endl;
	return 0;
}
