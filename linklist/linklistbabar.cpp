#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
		//constructor...............
		Node(int data){
			this ->data=data;
			this ->next=NULL;
		}
};

void insertAtHead(Node* &head,int d){
	//new node creat.........
	Node* temp=new Node(d);
	temp ->next=head;
	head=temp;
}


void insertAtPosition(Node* head,int position,int d){
	Node* temp=head;
	int cnt=1;
	while(cnt<position-1){
		temp=temp->next;
		cnt++;
	}
	Node* nodetoinsert=new Node(d);
	nodetoinsert->next=temp->next;
	temp->next=nodetoinsert;
}

void insertAtTail(Node* &tail,int d){
	Node* temp=new Node(d);
	tail ->next=temp;
	tail=tail->next;	
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
	// create a new node..........
	Node* node1=new Node(10);
//	cout<<node1->data<<endl;
//	cout<<node1->next<<endl;
	Node* head=node1;
	Node* tail=node1;
	print(head);
	// insert at first........
	insertAtHead(head,12);
	print(head);
	// insert at last.........
	insertAtTail(tail,14);
	print(head);
	
	insertAtPosition(head,4,100);
	print(head);
	
	return 0;
}















