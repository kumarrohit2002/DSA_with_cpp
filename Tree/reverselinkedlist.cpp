// reverse a linked list
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
			cout<<"Deleted value is :"<<val<<endl;
		}
};

//first solution..................

//Node* reverseLinkedList(Node* head){
//	if(head==NULL || head->next==NULL){
//		return head;
//	}
//	else{
//		Node* prev=NULL;
//		Node* curr=head;
//		Node* forward=head->next;
//		while(curr!=NULL){
//			forward=curr->next;
//			curr->next=prev;
//			prev=curr;
//			curr=forward;
//		}
//		return prev;
//	}
//}


//second solution.............................

//void reverse(Node* &head,Node* curr,Node* prev){
//	
//	//base case....
//	if(curr==NULL){
//		head=prev;
//		return;
//	}
//	Node* forward=curr->next;
//	reverse(head,forward,curr);
//	curr->next=prev;
//}
//
//Node* reverseLinkedList(Node* head){
////	reverse(head,head,NULL);
//	Node* curr=head;
//	Node* prev=NULL;
//	reverse(head,curr,prev);
//	return head;
//}


//third solution...............


Node* reverse(Node* head){
	if(head==NULL || head->next==NULL){
		return head;
	}
	
	Node* chotahead= reverse (head->next);
	head->next->next=head;
	head->next=NULL;
	return chotahead;
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

void print(Node* head){
	//if linked list is empty..........
	if(head==NULL){
		cout<<"Linked list is empty,please cheack again!!!";
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
	Node* tail=NULL;
	Node* head=NULL;
	insertAtTail(head,tail,3);
	insertAtTail(head,tail,4);
	insertAtTail(head,tail,5);
	insertAtTail(head,tail,6);
	insertAtTail(head,tail,7);
	print(head);
	cout<<"head:"<<head->data<<endl;
	cout<<"tail:"<<tail->data<<endl;
//	head=reverseLinkedList(head);
	head=reverse(head);
	cout<<"head:"<<head->data<<endl;
	cout<<"tail:"<<tail->data<<endl;
	print(head);
	return 0;
}
