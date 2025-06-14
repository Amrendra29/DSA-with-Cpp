#include<iostream>
using namespace std;

class getnode {
public:
    int data;
    getnode* next;
    getnode* prev;
    
   getnode(int x) {
      this->data = x;
       this->next=NULL;
        this->prev=NULL;
   }
};

void insertAtbegin(getnode* &cstart,int d){
   getnode* temp=new getnode(d);

    if(cstart==NULL){
     temp->next=cstart;
     temp->prev=cstart;
     cstart=temp;
    return ;
    }
    
    else{
      temp->next=cstart->next;
      cstart->next->prev=temp;
      cstart->next=temp;
      temp->prev=cstart;
      
      
       return;

    }

    }


void insertAtend(getnode* &cstart,int d){
   getnode* temp1=new getnode(d);

    if(cstart==NULL){
     temp1->next=temp1;
     temp1->prev=temp1;
     cstart=temp1;

    }
    else{
   temp1->prev=cstart;
   temp1->next=cstart->next;
   cstart->next->prev=temp1;
   cstart->next=temp1;
  cstart=temp1;
    }
    }


void print(getnode* cstart){
   getnode* temp=cstart;
   do{
    cout<<temp->data<<" ";
   
    temp=temp->next;
   }while (temp!=cstart);
  
   
    cout<<endl;
}


int main(){

    getnode* Node=new getnode(10);
    getnode* cstart=Node;
    cstart->next=new getnode(20);
    cstart->next->prev=cstart;
    print(cstart);
    insertAtbegin(cstart,11);
    print(cstart);
   //  insertAtbegin(cstart,15);
   //  print(cstart);
   //  insertAtbegin(cstart,25);
   //  print(cstart);
    // insertAtend(cstart,45);
    // print(cstart);
    //insertAtend(cstart,35);
    //print(cstart);

    return 0;
}