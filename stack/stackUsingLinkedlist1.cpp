#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    //constructer...........
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
            this->currsize=0;
            head=NULL;
        }
        bool isempty(){
            return this->head==NULL;
        }
        bool isfull(){
            return this->currsize==this->capacity;
        }
        void push(int d){
            if(this->currsize==this->capacity){
                cout<<"OVERFLOW"<<endl;
                return;
            }
            Node* new_node=new Node(d);
            new_node->next=this->head;
            this->head=new_node;
        }
        void pop(){
            if(this->currsize==0){
                cout<<"UNDERFLOW!!"<<endl;
                return;
            }
            Node* temp=this->head;
            this->head=this->head->next;
            temp->next=NULL;
            delete temp;
        }
        int gettop(){
            if(this->head==NULL){
                cout<<"UNDERFLOW!!"<<endl;
                return -1;
            }
            return this->head->data;
        }

};

int main(){
    stack st(5);
    st.push(2);
    cout<<st.gettop()<<endl;
    st.push(4);
    cout<<st.gettop()<<endl;
    return 0;
}