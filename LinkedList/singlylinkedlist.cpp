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
    print(head);
    Node* tail=node1;
    //insertattail(head,10); (homework)
    print(head);
   // insertattail(head,12);
    print(head);

    return 0;
}

