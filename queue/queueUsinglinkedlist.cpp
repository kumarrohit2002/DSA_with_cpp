#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    // int size;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }

};
class queue{
    Node* head;
    Node* tail;
    int size;
    public:
    queue(){
        this->head=NULL;
        this->tail=NULL;
        this->size=0;
    }
    void enqueue(int data){
        Node* newNode=new Node(data);
        if(this->head==NULL){
            //LL empty
            this->head=this->tail=newNode;

        } else{
            this->tail->next=newNode;
            this->tail=newNode;
        }
        this->size++;
    }
    // void dequeue(){
    //     if(this->head==NULL){
    //         //LL empty
    //         return;
    //     } else{
    //         Node* oldHead=this->head;
    //         Node* newHead=this->head->next;
    //         if(this->head==NULL) this->tail=NULL;

    //         oldHead->next=NULL;
    //         delete oldHead;
    //         this->size--;
    //     }
    // }
    void dequeue() {
    if (this->head == NULL) {
        // Queue is empty
        return;
    } else {
        Node* oldHead = this->head;
        Node* newHead = this->head->next;
        if (newHead == NULL) {
            this->tail = NULL;
        }

        this->head = newHead; // Update the head pointer
        oldHead->next = NULL;
        delete oldHead;
        this->size--;
    }
}

    int getsize(){
        return this->size;
    }
    bool isempty(){
        return this->head==NULL;
    }
    int front(){
        if(this->head==NULL) return -1;
        return this->head->data;
    }
};

int main() {
    queue qe;
    qe.enqueue(10);
    qe.enqueue(20);
    qe.enqueue(30); 
    qe.enqueue(40);
    // qe.dequeue();
    cout<<qe.front()<<endl;
    while(not qe.isempty()){
        cout<<qe.front()<<" ";
        qe.dequeue();
    }
    return 0;
}