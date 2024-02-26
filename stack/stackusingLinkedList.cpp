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
};

class stack{
    private:
        Node* head;
        int capacity;
        int currsize;
    public:
        stack(int c){
            this->capacity=c;
            this->currsize=0;
            head=NULL;
        }
        bool isempty(){
            return this->head==NULL;
        }
        int gettop(){
            if(this->head==NULL){
                cout<<"Underflow"<<endl;
                return -1;
            }
            return head->data;
        }
        bool isfull(){
            return this->currsize==this->capacity;
        }
        int size(){
            return this->currsize;
        }
        void push(int data){
            if(this->capacity==currsize){
                cout<<"overflow"<<endl;
                return;
            }
            Node* temp=new Node(data);
            temp->next=this->head;
            this->head=temp;
            this->currsize++;
            cout<<data<<" is inserted in stack"<<endl;
        }
        void pop(){
                if(this->head==NULL){
                    cout<<"Underflow"<<endl;
                    return;
                }
                cout<<this-head->data<<"is poped from stack!!!"<<endl;
                Node* Newhead=this->head->next;
                Node* temp=this->head;
                head->next=NULL;
                delete temp;
                this->head=Newhead;
                this->currsize--;
        }
};

int main(){
    stack s(3);
    cout<<"Top element: "<<s.gettop()<<endl;
    cout<<"Isempty: "<<s.isempty()<<endl;
    s.push(4);
    cout<<"Top element: "<<s.gettop()<<endl;
    cout<<"Isempty: "<<s.isempty()<<endl;
    cout<<"current size of stack is: "<<s.size()<<endl;
    s.pop();
    cout<<"Isempty: "<<s.isempty()<<endl;
    s.push(5);
    s.push(6);
    s.pop();
    cout<<"Top element: "<<s.gettop()<<endl;
    cout<<"current size of stack is: "<<s.size()<<endl;
    cout<<"Isfull: "<<s.isfull();
    return 0;
}