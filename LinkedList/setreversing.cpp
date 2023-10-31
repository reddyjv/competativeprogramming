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
Node* setreverse(Node* head,int k){
  if(head==NULL){
    return NULL;
  }
  //step 1:reverse first k nodes
  Node* next=NULL;
  Node* curr=head;
  Node* prev=NULL;
  int count=0;
  while(curr!=NULL && count<k){
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
    count++;
  }

  //step 2:recursion will handle rest
  if(next!=NULL){
    head->next=setreverse(next,k);
  }
  //step 3:return head of reversed list
  return prev;
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
    insertathead(head,13);
    insertathead(head,19);
    insertathead(head,12);
    print(head);
    cout<<"enter k count"<<endl;
    int h;
    cin>>h;
    Node* k=setreverse(head,h);
    print(k);
    Node* tail=node1;
    deleteNode(1,head);
    print(head);
}
/* T C=O(n)
S C=O(n/k)
*/
/*output
10
0
10 
12 19 13 11 17 16 1 12 10 
enter k count
2
19 12 11 13 16 17 12 1 10 
memory is free for node with data 
11 13 16 17 12 1 10 
*/