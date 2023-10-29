#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    //constructor
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
}
~Node(){
    int val=this->data;
    if(next!=NULL){
        delete next;
        next=NULL;
    }
    cout<<"memory free for node with data"<<val<<endl;
}
};
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}
void insertathead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insertattail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
int getlength(Node* head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
void insertatposition(Node* &tail,Node* &head,int position,int d){
    //inser at start
    if(position==1){
        insertathead(head,d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    //inserting at last position
    if(temp->next==NULL){
        insertattail(tail,d);
    }
    Node* nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;
}
void deletenode(int position,Node* &head){
    //deleting first ot starting node
    if(position==1){
Node* temp=head;
head=head->next;
temp->next=NULL;
delete temp;

 }

    else{
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }

}
int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    print(head);
    cout<<getlength(head)<<endl;
    insertathead(head,11);
    print(head);
      insertathead(head,13);
    print(head);
      insertathead(head,8);
    print(head);
      insertathead(head,25);
    print(head);
    insertatposition(tail,head,2,100);
    print(head);
    deletenode(6,head);
    print(head);
    return 0;
}