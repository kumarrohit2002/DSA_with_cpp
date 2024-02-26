#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node* next;
		Node(int d){
			this->data=d;
			this->next=NULL;
		}
};

class stack{
	Node* head;
	int capacity;
	int currsize;
	public:
		stack(int c){
			this->capacity=c;
			this->head=NULL;
			this->currsize=0;
		}
		
		bool isempty(){
			return head==NULL;
		}
		bool isfull(){
			return currsize==capacity;
		}
		
		int top(){
			return head->data;
		}
		
        int size(){
            return currsize;
        }

		void push(int d){
			if(currsize==capacity){
				cout<<"stack Overflow\n";
				return;
			}
            currsize++;
			Node* temp=new Node(d);
			if(head==NULL){
				head=temp;
				return;
			}
			temp->next=head;
			head=temp;
		}
		
		void pop(){
			if(currsize==0){
				cout<<"stack underflow!!!\n";
				return;
			}
            currsize--;
			Node* temp=head;
			head=temp->next;
			temp->next=NULL;
			free(temp);
			return;
		}
};


int main(){
	stack s(5);
	s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    // s.push(5);    //stack overflow...........
    cout<<"size: "<<s.size()<<endl;
	while(!s.isempty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    s.push(50);
    // cout<<s.top();
    // s.pop();   //stack underflow...............
	return 0;
}