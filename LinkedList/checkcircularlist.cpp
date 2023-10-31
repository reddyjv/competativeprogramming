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
    else
    {
        //non-empty list
        //assuming that the element is present in the list
        Node* curr=tail;
        while (curr->data!=element){
            curr=curr->next;
        }
      Node* temp=new Node(d);
      temp->next=curr->next;
      curr->next=temp;
        
    }
}
void print(Node* tail){
    Node* temp=tail;
    if(tail==NULL){
        cout<<"List is empty"<<endl;
    }
    
    
    do{
        cout<<tail->data<<" ";
        tail=tail->next;

    }while(tail!=temp);
    cout<<endl;

}
bool iscircular(Node* head){
  //empty list
  if(head==NULL){
    return true;
  }
  Node* temp=head->next;
  while(temp!=NULL && temp!=head){
    temp=temp->next;
  }
  if(temp==head){
    return true;
  }
  return false;

}
void deletenode(Node* &tail,int value){
    //emppty list
    if(tail==NULL){
        cout<<"List is empty,please check again"<<endl;
        return;
    }
    else{
        //non-empty
        //assuming the "value" is present in the Linkedlist
        Node* prev=tail;
        Node* curr=prev->next;
        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        if(tail==prev){
            tail=NULL;
        }
        else if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}
int main(){
    Node* tail=NULL;
    insertnode(tail,10,3);
    print(tail);
     insertnode(tail,3,5);
    print(tail);
       insertnode(tail,5,9);
    print(tail);
       insertnode(tail,9,10);
    print(tail);
       insertnode(tail,10,11);
    print(tail);
       insertnode(tail,11,8);
    print(tail);
    deletenode(tail,9);
    print(tail);
      deletenode(tail,11);
    print(tail);
      deletenode(tail,8);
    print(tail);
    bool k=iscircular(tail);
    if(k){
      cout<<"list is circular in nature"<<endl;
    }
    else{
       cout<<"list is not circular in nature"<<endl;
    }
   

}
/* T C=O(n)
S C =O(1)
*/
/*output
3 5 
3 5 9 
3 5 9 10 
3 5 9 10 11 
3 5 9 10 11 8 
memory is free for node with data 9
3 5 10 11 8 
memory is free for node with data 11
3 5 10 8 
memory is free for node with data 8
3 5 10 
list is circular in nature
*/