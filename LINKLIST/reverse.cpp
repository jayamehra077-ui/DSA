#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int val)
    {
     data=val;
     next=NULL;
    }
};
class solution
{
 public:
  node* reverselist(node* head)
  {
    node* prev=NULL;
    node* curr=head;
    node* next=NULL;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
  }
};
class list:public solution
{

 node* head;
 node* tail;
 public:
 list()
 {
    head=tail=NULL;

 }
 void push_front(int val)
 {
node* newnode=new node(val);//data stors permanently
//node newnode(val); "data erase after func calling"
//newnode->next=head;
//head=newnode;
 
if(head==NULL)
{
    head=tail=newnode;
    return;
}
else{
    newnode->next=head;
    head=newnode;
}
}
 void printll()
 {
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ->";
        temp=temp->next;
    }
    //temp=temp->next;
    cout<<"NULL"<<endl;
 }
 void reverse()
 {
    head=reverselist(head);
 }
};

int main(){
list ll;
//solution r ;
ll.push_front(2);
ll.push_front(3);
ll.push_front(4);
ll.push_front(5);
cout<<"before reverse:\n";
ll.printll();
cout<<"after  reverse:\n";
ll.reverse();
ll.printll();
  
return 0;
}