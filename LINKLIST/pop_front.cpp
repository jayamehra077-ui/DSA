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
void pop_front()
{
    if(head==NULL)
    {
        cout<<"link list is empty!!!!!\n";
        return;
    }
    else{
        node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
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
};
int main(){
list ll;
ll.push_front(2);
ll.push_front(3);
ll.push_front(4);
ll.push_front(5);
ll.pop_front();
ll.printll();
return 0;
}