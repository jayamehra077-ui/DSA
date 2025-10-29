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
class list
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
 void add_beforelast(int x)
 {if (head == NULL) {
            push_front(x);
            return;
        }
        
        if (head->next == NULL) {
            node* newnode = new node(x);
            newnode->next = head;
            head = newnode;
            return;
        }

        node* slow = head; 
        node* fast = head->next; 
    
    while( fast->next!=NULL)
    {
      slow=slow->next;
      fast=fast->next;
    }
    node* newnode=new node(x);
    newnode->next=fast;
    slow->next =newnode;
 }
};
int main(){
list ll;
ll.push_front(2);
ll.push_front(3);
ll.push_front(4);
ll.push_front(5);
ll.printll();
ll.add_beforelast(30);
ll.printll();
return 0;
}