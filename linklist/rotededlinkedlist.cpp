#include<iostream>
#include<math.h>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		Node(int data){
			this->data=data;
			this->next=NULL;
		}
};

void insertAtTail(Node* &head, Node* &tail,int ele){
	Node* temp=new Node(ele);
	if(tail==NULL){
		tail=temp;
		head=temp;
	}
	else{
		tail->next=temp;
		tail=temp;
	}
}

void print(Node* head){
	if(head==NULL){
		cout<<"linked list is empty!!!!";
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
	int n;
	cin>>n;
	int ele;
	for(int i=0;i<n;i++){
		cin>>ele;
		insertAtTail(head,tail,ele);          // 1 2 3 4 5
	}
	int round;
	cin>>round;
	while(round>=n){
		round=abs(n-round);
	}
	if(round==0){
		print(head);
	}
	else{
	int r=1;
	Node* temp=head;
	while(r!=n-round){
		temp=temp->next;
		r++;
	}
	
	Node* forward=temp->next;
	temp->next=NULL;
	tail->next=head;
	head=forward;
	print(head);
	}
	
	return 0;
}
