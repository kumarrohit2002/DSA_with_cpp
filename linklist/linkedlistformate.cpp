#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
		Node(int data){
			this->data=data;
			this->next=NULL;
		}
		~Node(){
			int val=this->data;
			if(this->next!=NULL){
				delete next;
				this->next=NULL;
			}
			cout<<"deleted val: "<<val<<endl;
		}
};

void insertAtHead(Node* &head,Node* &tail,int d){
	if(head==NULL){
		Node* temp=new Node(d);
		tail=temp;
		head=temp;
	}
	else{
		Node* temp=new Node(d);
		temp->next=head;
		head=temp;
	}
}

void insertAtTail(Node* &head,Node* &tail,int d){
	if(tail==NULL){
		Node* temp=new Node(d);
		tail=temp;
		head=temp;
	}
	else{
		Node* temp=new Node(d);
		tail->next=temp;
		tail=temp;
	}
}

void insertAtPosition(Node* &head,Node* &tail,int p,int d){
	if(p==1){
		insertAtHead(head,tail,d);
		return;
	}
	else{
		Node* temp=head;
		int c=1;
		while(c<p-1){
			temp=temp->next;                    //1 2 3 4 5
			c++;
		}
		if(temp->next==NULL){
			insertAtTail(head,tail,d);
			return;
		}
		Node* insertToNode=new Node(d);
		insertToNode->next=temp->next;
		temp->next=insertToNode;
	}
}

void deleteAtPosition(Node* &head,Node* &tail,int p){
	if(p==1){
		Node* temp=head;
		head=head->next;
		//delete
		temp->next=NULL;
		delete temp;
	}
	else{
		Node* prev=NULL;
		Node* curr=head;
		int c=1;
		while(p!=c){
			prev=curr;
			curr=curr->next;
			c++;
		}
		if(curr->next==NULL){
			prev->next=NULL;
			tail=prev;
			//delete
			curr->next=NULL;
			delete curr;
		}
		else{
		cout<<curr->data;       //1 2 3 4 5
		prev->next=curr->next;
//		delete
		curr->next=NULL;
		delete curr;
	}
		
	}
}


void print(Node* head){
	if(head==NULL){
		cout<<"Linked list is empty!!!";
	}
	else{
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
	cout<<endl;
}

int main(){
	Node* head=NULL;
	Node* tail=NULL;
	int n,ele;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>ele;
		insertAtTail(head,tail,ele);
	}
	cout<<"head: "<<head->data<<endl;
	cout<<"Tail: "<<tail->data<<endl;
	insertAtPosition(head,tail,1,50);
	deleteAtPosition(head,tail,2);
	print(head);
	cout<<"head: "<<head->data<<endl;
	cout<<"Tail: "<<tail->data<<endl;
}
