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
    //destructor
    ~Node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }


};

void insertAthead(Node* &head,int d){
    //create a node
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}


void insertAttail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void  insertAtpoint(Node* &head,Node* &tail,int location,int d){
   
   Node* temp=head;
   int count=1;
   if(location==1){
    insertAthead(head,d);
    return;

   }
   while(count<location-1){
    temp=temp->next;
    count++;
   }
    if(temp->next==NULL){
    insertAttail(tail,d);
    return;
   }
   Node* nodetoinsert=new Node(d);
   nodetoinsert->next=temp->next;
   temp->next=nodetoinsert;
  


}
void print(Node* &head){
    Node* temp=head;
    while (temp!=NULL)
    {
       cout<<temp->data<<" ";
       temp=temp->next;
    }
    cout<<endl;
    
}
void deleteNode(int position, Node* & head) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        //memory free start ndoe
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;

    }
}


int main(){
    Node* n1=new Node(10);
    // cout<<n1->data<<endl;
    // cout<<n1->next<<endl;


    Node* head=n1;
    Node* tail=n1;
    print(head);
    insertAttail(tail,15);
    print(head);
    insertAttail(tail,20);
    print(head);
    
    insertAtpoint(head,tail,4,22);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
deleteNode(4,head);
print(head);

 cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
return 0;
}