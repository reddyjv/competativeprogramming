#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;

    }
    ~Node(){
        int value=this->data;
        if(this->next != NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data "<<endl;
    }
};
void insertathead(Node* &head,int d){
    //new node creation
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
};
void inseratposition(Node* &head,int position,int d){
    if(position==1){
        insertathead(head,d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt <position-1){
        temp=temp->next;
        cnt++;
    }
    //creating node for d
    Node* nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;

}
void deleteNode(int position,Node* &head){
    //deleting first or start node
    if(position==1){
        Node* temp=head;
        head=head->next;
        //memory free start node
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
        //deleting is for homework

    }
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}
void reverse(Node* &head,Node* curr,Node* prev){
    //base case
    if(curr==NULL){
        head=prev;
        return;
    }
    Node* forward=curr->next;
    reverse(head,forward,curr);
    curr->next=prev;
}
Node* rev(Node* head){
    Node* curr=head;
    Node* prev=NULL;
    reverse(head,curr,prev);
    return head;
}
Node* reverseLinkedlist(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=NULL;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}

Node* reverse1(Node* head){
    //base case
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* chotahead=reverse1(head->next);
    head->next->next=head;
    head->next=NULL;

    return chotahead;

}
int main(){
    //created a new node
    Node* node1=new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    //head pointed to new node
    Node* head=node1;
    print(head);
    insertathead(head,12);
    insertathead(head,1);
    insertathead(head,16);
    insertathead(head,17);
    insertathead(head,11);
    print(head);
    Node* tail=node1;
    deleteNode(1,head);
    print(head);
   Node* h=reverse1(head);
   print(h);
  Node* k=reverseLinkedlist(h);
    print(k);
    Node* f=rev(k);
    print(f);
  

 


    return 0;
}
/*output
10
0
10 
11 17 16 1 12 10 
memory is free for node with data 
17 16 1 12 10 
10 12 1 16 17 
17 16 1 12 10 
10 12 1 16 17
*/