#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    //constructer
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }

    //destructor
    ~Node() {
        int val = this -> data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data "<< val << endl;
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

void  insertAthead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }
    
    void insertAttail(Node* &tail,int d){
        Node* temp=new Node(d);
        tail->next=temp;
        temp->prev=tail;
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
  temp->next->prev=nodetoinsert;
  temp->next=nodetoinsert;
  nodetoinsert->prev=temp;


}
void deleteNode(int position, Node* & head) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp ->next;
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

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;

    }
}


int main(){
    Node* n1=new Node(10);
    Node* head=n1;
    Node* tail=n1;

    print(head);

    insertAthead(head,12);
    print(head);
    insertAthead(head,15);
    print(head);
     insertAthead(head,18);
    print(head);
     insertAthead(head,11);
    print(head);

    insertAttail(tail ,20);
    print(head);
    insertAttail(tail ,22);
    print(head);


    insertAtpoint(head,tail,2,100);
    print(head);
     insertAtpoint(head,tail,1,1010);
    print(head);


    deleteNode(1,head);
    print(head);
    return 0;

}