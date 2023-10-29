//linked list is linear data structure and also collection of nodes
//vector is dynamically doubled when it is full so space will be wasted
//so linked list will be used for better efficiency(can be expanded in runtime easily)
//node contains data and address of next node
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
    //insertattail(head,10); (homework)
   // print(head);
   // insertattail(head,12);
   // print(head);


    return 0;
}
/*output
10
0
10 
11 17 16 1 12 10 
memory is free for node with data 
17 16 1 12 10 
*/

