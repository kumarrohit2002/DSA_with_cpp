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
		~Node(){
			int value=this->data;
			if(this->next!=NULL){
				delete next;
				this->next=NULL;
			}
			cout<<"deleted value: "<<value<<endl;
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

void insertAtPosition(Node* &tail,Node* &head,int position,int d){
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

void deleteatposition(int p,Node* &head,Node* &tail){
	if(p==1){
		Node* temp=head;
		head=head->next;
		//delete
		temp->next=NULL;
		delete temp;
	}
	else{
		Node* curr=head;
		Node* prev=NULL;
		int c=1;
		while(c<p){
			prev=curr;
			curr=curr->next;
			c++;
		}
		if(curr->next==NULL){
			prev->next=NULL;
			tail=prev;
			delete curr;
		}
		else{
		prev->next=curr->next;
		//delete 
		curr->next=NULL;
		delete curr;
	}
	}
}

int main(){
	Node* node1=new Node(30);
	Node* head=node1;
	Node* tail=node1;
	
	insertAtHead(head,12);
	insertAtTail(tail,15);
	insertAtPosition(tail,head,4,22);
	cout<<"head: "<<head->data<<endl;
	cout<<"tail: "<<tail->data<<endl;
	print(head);
	deleteatposition(4,head,tail);
	print(head);
	cout<<"head: "<<head->data<<endl;
	cout<<"tail: "<<tail->data<<endl;
	return 0;
}
