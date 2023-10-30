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
int getlength(Node* head){
    int len=0;
    while(head!=NULL){
        len++;
        head=head->next;
    }
    return len;
}
Node* findmiddle(Node* head){
    int len=getlength(head);
    int ans=(len/2);
    Node* temp=head;
    int cnt=0;
    while(cnt<ans){
    temp=temp->next;
    cnt++;
    }
    return temp;   /*T C=O(n)+O(n/2)
                     =O(n)+O(n/2)
                     =2 O(n)
                     =O(n)
                     */
}
Node* getmiddle(Node* head){
    if(head==NULL || head->next)
    return head;
    //2 nodes - needed or not?
    if(head->next->next==NULL){
        return head->next;
    }
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
           slow=slow->next;
    }
    return slow;
 
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
    Node* k=getmiddle(head);
    cout<<k->data<<endl;
      Node* h=getmiddle(head);
    cout<<h->data<<endl;

}
/*output
10
0
10 
11 17 16 1 12 10 
memory is free for node with data 
17 16 1 12 10 
17
17
*/