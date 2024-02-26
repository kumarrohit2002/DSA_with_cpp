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

void insertAtHead(Node* &head,int d){
	Node* temp=new Node(d);
	temp->next=head;
	head=temp;
}

void insertAtTail(Node* &tail,int d){
	Node* temp=new Node(d);
	tail->next=temp;
	temp=tail;
}

void insertAtPosition(Node* &head,int position,int d){     // 3 4  [2][] 5 6
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

void print(Node* head){
	Node* temp=head;
	while(temp!=NULL){
		cout<< temp->data <<" ";
		temp=temp->next;
	}
	cout<<endl;
}


int main(){
	Node* node1=new Node(10);
	Node* head=node1;
	Node* tail=node1;
	print(head);
	
	insertAtHead(head,15);
	print(head);
	
	insertAtTail(tail,20);
	print(head);
	
	
	insertAtPosition(head ,2,99);
	print(head);
	
	return 0;
}
