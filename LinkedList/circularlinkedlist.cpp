#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};
void insertnode(Node* &tail,int element,int d){
    //empty list
    if(tail==NULL){
    Node* newnode=new Node(d);
    tail=newnode;
    newnode->next=newnode;
    }
    elsse
    {
        //non-empty list
        //assuming that the element is present in the list
        Node* curr=tail;
        while (curr->data!=NULL){
            curr=curr->next;
        }
      Node* temp=new Node(d);
      temp->next=curr->next;
      curr->next=temp;
        
    }
}
void print(Node* tail){
    Node* temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;

    }while(tail!=temp);

}
int main(){
    Node* tail=NULL;
    insertnode(tail,5,3);
    print(tail);
     insertnode(tail,3,5);
    print(tail);
     insertnode(tail,5,7);
    print(tail);

}